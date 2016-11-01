//DATE:2016/05/03    TIME:16:19:18

#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<iostream>
#include<fstream>
#include<string.h>
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
  struct ListNode2 {
  	ListNode* ptr;
  	bool visited;
  	ListNode2 *next;
  	ListNode2(ListNode* x):ptr(x),visited(false),next(NULL){
	  }
  };
class Solution {
public:

    bool hasCycle(ListNode *head) {
    	
    	ListNode *node,*node2;
    	
    	//special case;
		if(head==NULL) return false;
    	node=head;
    	node2=head;
    	while(node->next!=NULL&& node2->next!=NULL && node2->next->next!=NULL){
    		node=node->next;
    		node2=node2->next->next;
    		if(node==node2) return true;

		}
		return false;

        
    }
};
int main(void){
	ListNode *head;
	head=new ListNode(1);
	head->next= new ListNode(2);
	head->next->next= new ListNode (3);
//	head->next->next=head->next;
	Solution aa;
	cout<<aa.hasCycle(head);
	return 0;
}
