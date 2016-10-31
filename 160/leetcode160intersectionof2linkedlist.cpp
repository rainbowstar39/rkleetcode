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
        
        //special case
        if(headA==NULL || headB==NULL) return NULL;
        
        
        //common case
        
		int lena=0,lenb=0;
		currenta=headA;
		
		ListNode *enda,*endb;
		ListNode *rlsta,*rlstb;
		ListNode *rheadA,*rheadB; 
		ListNode *prea,*preb;
		ListNode *newa,*newb;
		
		#if 1
		while(currenta!=NULL){
			lena++;
			if(currenta==headA){
				rlsta->next=NULL;
				rlsta=NULL;
			}
			else if(currenta->next!=NULL){
				rlsta=new ListNode(currenta->next->val); 
				rlsta->next=new ListNode(currenta->val);	
				rlsta->next->next=NULL;
				rlsta=rlsta->next->next;					
			}
	
			currenta=currenta->next;
			
		} 
		

		
		currentb=headB;
		while(currentb!=NULL){
			lenb++;
			if(currentb==headB){
				rlstb->next=NULL;
				rlstb=NULL;
			}	
			else if(currentb->next!=NULL){
					rlstb=new ListNode(currentb->next->val);
					rlstb->next=new ListNode(currentb->val);
					rlstb=rlstb->next->next=NULL;
			}			
			currentb=currentb->next;
			
		} 
		#endif
		cout<<"lena:"<<lena<<"lenb:"<<lenb<<endl;
		
		

    }
};

int main(void){
	ListNode *lista;
	ListNode *listb;

	vector<int> a1;
	vector<int> b1;
	char stra[]="1,3,5,6,7,8,9,10";
	char strb[]="2,4,6,7,8,9,10";
	
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
	
	
	Solution aa;
	ListNode *c1;
	c1=aa.getIntersectionNode(lista,listb) ;
#if 0	
	ListNode *node;
	node=c1;
	while(node!=NULL){
		cout<<"node:"<<node->val<<",";
		node=node->next;
	}
		
#endif	
} 
