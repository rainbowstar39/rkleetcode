#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<vector>
#include<string.h>
using namespace std;

//DATE:2016/04/21    TIME:20:29:28
//DATE:2016/04/21    TIME:21:06:24
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
    bool isPalindrome(ListNode* head) {
    	//special case
        if (head==NULL) return true;
        if (head->next==NULL) return true;
        
        //common case
 		ListNode *pre,*node,*node1,*node2,*nextnode,*head1,*head2;
 		node=head;
 		int len=0;
 		while (node!=NULL){
 			len++;
 			node=node->next;
		 }
		 
		 int end=0;
		 int begin=0;
		 end=len/2;		 
		 if(len%2==1)begin=end+2;
		 else begin=end+1;

		 node=head;
		 pre=NULL;
		 //cout<<"len:"<<len<<endl;
		 for(int idx=1;idx<=len;idx++)
		 {
			
		//	cout<<"idx:"<<idx<<",";
		 	if(idx<=end){
		 //		cout<<node->val<<","<<endl;
		 		nextnode=node->next;
			 	node->next=pre;
			 	if(idx==end)head1=node;
		 	//
			 	pre=node;
			 	node=nextnode;
			// 	cout<<endl<<"nextnode1:"<<nextnode->val<<",";
			
			}
			else if(idx<begin){
			//	cout<<endl;
				nextnode=node->next;
				node=nextnode;
			//	cout<<endl<<"nextnode:"<<nextnode->val<<",";
			}
			else if(idx==begin){
			//	
				node1=head1;
				node2=node;
			//	cout<<node1->val<<",";
			//	cout<<node2->val<<","<<endl;
				if(node1->val!=node2->val)return false;	
				node1=node1->next;
				node2=node2->next;			
			}
			else if(idx>begin){
			//	cout<<node1->val<<",";
			//	cout<<node2->val<<","<<endl;
				if(node1->val!=node2->val)return false;	
				node1=node1->next;
				node2=node2->next;					
			}

			
			
		 }
		 
		// cout<<endl;
		return true;
		
    }
};

int main(void){
	ListNode *n0=new ListNode(1);
	ListNode *n1=new ListNode(2);
	ListNode *n2=new ListNode(1);
//	ListNode *n3=new ListNode(1);
//	ListNode *n4=new ListNode(1);
	n0->next=n1;
	n1->next=n2;
//	n2->next=n3;
//	n3->next=n4;
	
	Solution aa;
	cout<<aa.isPalindrome(n0);
	return 0;
}
