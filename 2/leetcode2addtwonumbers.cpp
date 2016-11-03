//2. add two numbers
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){

		ListNode *result=new ListNode(0);
		ListNode *HeadNode;
		HeadNode=result;
		
		unsigned int r=0;
		while(1){
	//	while(l1!=NULL || l2!=NULL){
		//	cout<<l1->val<<"/"<<l2->val<<endl;
			ListNode *nextNode=new ListNode(0);
			if(l1==NULL){
				result->val+=l2->val;	
				l2=l2->next; 

			}
			else if (l2==NULL){
				result->val+=l1->val;			
				l1=l1->next;
			}
			else {
				result->val+=l1->val+l2->val;

				l1=l1->next;
				l2=l2->next;
			}
			
			r=result->val;
			if(r>=10){
				result->val=r%10;
			    nextNode->val=r/10;
			}
			
		    if(l1==NULL && l2==NULL &&nextNode->val!=0){
				result->next=nextNode;
				result=result->next;
				break;
			}
			else if (l1==NULL && l2==NULL ){

			    break;
			}
			else {
				result->next=nextNode;
				result=result->next;		
			}
		} 

	//	printnums(HeadNode);
		return HeadNode;   
}
};
using namespace std;
int main(void){
	return 0;
}
