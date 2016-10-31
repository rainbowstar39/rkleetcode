#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string.h>
#include<fstream>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    	ListNode *newhead;
    	ListNode *prenode;
    	ListNode *nextnode;
    	ListNode *currnode;
    	//special case
    	if (head==NULL) return NULL;
    	
    	//
    	prenode=NULL;
    	currnode=head;
    	while(currnode!=NULL){
    		//cout<<currnode->val<<",";
    		nextnode=currnode->next;
    		currnode->next=prenode;
    		newhead=currnode;
    		prenode=currnode;
    		currnode=nextnode;
		}

		return newhead;
        
    }
};

int main(void) {
	ListNode node1(1);
	ListNode node2(2);
	ListNode node3(3);
	ListNode node4(4);
	ListNode node5(5);
	ListNode *head=&node1;
	node1.next=&node2;
	node2.next=&node3;
	node3.next=&node4; 
	ListNode *newhead;
	Solution aa;
	newhead=aa.reverseList(head);
	ListNode *curr;
	curr=newhead;
	while(curr!=NULL){
		cout<<curr->val<<",";
		curr=curr->next;
	}
	return 0;
}
