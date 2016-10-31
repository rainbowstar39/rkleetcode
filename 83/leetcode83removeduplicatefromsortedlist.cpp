#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 struct ListNode{
 	int val;
 	ListNode *next;
 	ListNode(int x):val(x),next(NULL){	 }
 };


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* headidx;
        ListNode *idx,*jdx;
        
        //special case;
        if(head==NULL)return NULL;
        if(head->next==NULL)return head;
        //usual case
        idx=head;
        jdx=head->next;
        while(idx!=NULL&&jdx!=NULL){
        	if(jdx->val==idx->val){
				idx->next=jdx->next;
				jdx=jdx->next;
			}
//        	cout<<idx->val<<","<<endl;
        	else {
  				idx=idx->next;
        		jdx=idx->next;
			}
      		
		}
		return head;
    }
};


int main(void){
	ListNode node(5);
	ListNode* head;
	head=&node;
	ListNode node2(6);
	head->next=&node2;
	ListNode node3(7);
	ListNode node4(7);
	
	node2.next=&node3;
	node3.next=&node4;
	Solution aa;
	head=aa.deleteDuplicates(head);
	ListNode* idx;
	idx=head;
	while(idx!=NULL){
		cout<<idx->val<<",";
		idx=idx->next;
	}
	return 0;
}
