#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<string.h>
#include<vector>
#include<time.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //DATE:2016/04/20    TIME:01:29
 //DATE:2016/04/20    TIME:02:31:07
 
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *currenta,*currentb;
        ListNode *nexta,*nextb;
        
        currenta=headA;
        currentb=headB;
     	while(currenta!=currentb){
     		
     		
     		if(currenta!=NULL){
     			currenta=currenta->next;
			 }
			 else{
			 	currenta=headB;
			 }
			 
			 if(currentb!=NULL){
			 	currentb=currentb->next;
			 }
			 else{
			 	currentb=headA;
			 }
		 }
		 
		 return currenta;
    }
};

int main(void){
	ListNode *lista;
	ListNode *listb;

	vector<int> a1;
	vector<int> b1;
	//char stra[]="1,3,5,6,7,8,9,10";
	//char strb[]="2,4,6,7,8,9,10";
	
	char strb[]="3";
	char stra[]="2,3";
	
	char* pch;
	pch=strtok(stra,",");
	a1.push_back(atoi(pch));
	while(pch!=NULL){
		pch=strtok(NULL,",");
		a1.push_back(atoi(pch));
	}
	a1.pop_back();

	pch=strtok(strb,",");
	b1.push_back(atoi(pch));
	while(pch!=NULL){
		pch=strtok(NULL,",");
		b1.push_back(atoi(pch));
	}
	b1.pop_back();	
	
	ListNode *nodea,*nodeb;
	nodea=lista=new ListNode(a1[0]); 
	for(int idx=1;idx<a1.size();idx++){
		nodea->next=new ListNode(a1[idx]);
		nodea=nodea->next;
	}
	nodeb=listb=new ListNode(b1[0]); 
	for(int idx=1;idx<b1.size();idx++){
		nodeb->next=new ListNode(b1[idx]);
		nodeb=nodeb->next;
	}
	
	
	
	lista=NULL;
	listb=NULL;
	ListNode *listc;
	listc=new ListNode(3);
	
	listb=new ListNode(2);
	listb->next=listc;
	lista=listc;
	
	Solution aa;
	ListNode *c1;
	c1=aa.getIntersectionNode(lista,listb) ;
#if 1	
	ListNode *node;
	node=c1;
	while(node!=NULL){
		cout<<"node:"<<node->val<<",";
		node=node->next;
	}
		
#endif	
} 
