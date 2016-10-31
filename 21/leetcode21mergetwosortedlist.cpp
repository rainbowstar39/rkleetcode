#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string.h>
#include<fstream>
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
   struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
 
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    	
    //	fstream fs;
   // 	fs.open("logleetcode21.log",fstream::in | fstream::out| fstream::app);
    	//special case
    	//if empty
    	if(l1==NULL && l2==NULL) return NULL;
    	if(l1==NULL && l2!=NULL) return l2;
    	if(l2==NULL && l1!=NULL) return l1;
    	
    	//usual case
    	ListNode *result,*head;
    	ListNode *currenta,*currentb;

    	currenta=l1;
    	currentb=l2;
    	
   
		
		int cnt=0;
		//head
		if(currenta->val<=currentb->val){
			// a is min
			head=new ListNode(currenta->val);
			currenta=currenta->next;
		}
		else{// b is min
			head=new ListNode(currentb->val);
			currentb=currentb->next;			
		}
		result=head;
		
		//from 2nd element;
		while(currenta!=NULL && currentb!=NULL){

	   		//cout<<"cnt:"<<(cnt++)<<"currenta:"<<currenta->val<<"currentb:"<<currentb->val<<endl;
	   		//fs<<"cnt:"<<(cnt++)<<"currenta:"<<currenta->val<<"currentb:"<<currentb->val;
	   		if(currenta->val<=currentb->val)
	   		{	
	   			//fs<<"currenta:"<<currenta->val<<",";
 	  			//fs<<"<"<<endl;
				result->next= new ListNode(currenta->val);
				currenta=currenta->next;
   			//	currentb=nextb;
			}
			else{
	   			//fs<<"currentb:"<<currentb->val<<",";
				//fs<<">"<<endl;
				result->next=new ListNode(currentb->val);
				currentb=currentb->next;
			}
			
				   		

			result=result->next;
	   		
		}

		if(currenta==NULL && currentb!=NULL){
			result->next=currentb;
		}
		else if(currentb==NULL && currenta!=NULL) {
			result->next=currenta;	
		}	
		
		#if 0
		time_t rawtime;
		struct tm *timeinfo;
		time(&rawtime);
		timeinfo=localtime(&rawtime);
		fs<<endl<<asctime(timeinfo)<<endl;
		fs<<endl<<"------------------------------"<<endl;
		fs.close();
		#endif		

		return head;
    }
};

int main(void){

	//char strb[]="-17,5,19,19";
	//char strb[]="-30,-29,-28,-28";
	//char stra[]="-30,-29,-28,-28,-27,-26,-26,-23,-23,-21,-18,-18,-17,-15,-14,-13,-13,-8,-8,-7,-7,-4,-2,0,1,5,5,5,7,11,13,13,15,17,17,26,26,27,28";
	//char stra[]="2,4,6,8";
	//char strb[]="1,2,5";
	
	char strb[]="2";
	char stra[]="1";
	vector<int> a;
	vector<int> b;
	
	char *pcha;
	char *pchb;
	pcha=strtok(stra,",");
	
	a.push_back(atoi(pcha));
	
	while(pcha!=NULL){
		pcha=strtok(NULL,",");
		a.push_back(atoi(pcha));
	}	
	
	pchb=strtok(strb,",");
	b.push_back(atoi(pchb));
	while(pchb!=NULL){
		pchb=strtok(NULL,",");
		b.push_back(atoi(pchb));
	}
	a.pop_back();
	b.pop_back();
	
	ListNode *lista;
	ListNode *listb;
	ListNode *heada,*prea;
	ListNode *headb,*preb;

	ListNode tmp(a[0]);
	prea=lista=&tmp;
	//cout<<prea->val<<","; 
	
	for(int idx=1;idx<a.size();idx++){
		
//		ListNode tmpa(a[idx]);
		prea->next=new ListNode(a[idx]);
		prea=prea->next;
		//cout<<"tmpaddr:"<<&tmp<<"//"<<prea->val<<","; 	
		//cout<<"tmpaddr:"<<&tmp<<"//"<<prea->val<<","; 	
	}
	prea->next=NULL;
	
	preb=listb=new ListNode(b[0]);
	for(int idx=1;idx<b.size();idx++){
		preb->next=new ListNode(b[idx]);
		preb=preb->next;
	}
	preb->next=NULL; 
	 
	#if 0
	ListNode *currenta;
	currenta=lista;
	cout<<currenta->val<<",";
	currenta=currenta->next;
	for(int idx=1;idx<a.size();idx++){
		cout<<currenta->val<<",";
		currenta=currenta->next;
	}
	#endif
	#if 0
	ListNode *currenta;
	currenta=lista;
	while(currenta!=NULL){
		cout<<"a:"<<currenta->val<<",";
		currenta=currenta->next;
	}
	ListNode *currentb;
	currentb=listb;
	while(currentb!=NULL){
		cout<<"b:"<<currentb->val<<",";
		currentb=currentb->next;
	}
	
	
	#endif
	
//	cout<<"addr a:"<<lista<<"addr b:"<<listb<<endl;
//	lista=listb;
//	cout<<"addr a:"<<lista<<endl; 
	#if 0
	for(int idx=1;idx<a.size();idx++){
		cout<<a[idx]<<",";
		
		
	}
	cout<<endl;
	for(int idx=0;idx<b.size();idx++){
		cout<<b[idx]<<",";
	}
	#endif
	
	Solution aa;
	ListNode *result;
	result=aa.mergeTwoLists(lista,listb);
	#if 1
	cout<<endl;
	cout<<"-------answer-------------";
	cout<<endl;
	while(result!=NULL){
		cout<<result->val<<",";
		result=result->next;
	}
	#endif
}

