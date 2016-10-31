#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string.h>
#include<fstream>
#include<time.h>
using namespace std;

//DATE:2016/04/19    TIME:22:03:09
//DATE:2016/04/19    TIME:22:58:01

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
    	//special case
    	if(head==NULL)
    	return NULL;
    	
    	if(head->next==NULL)
    	return head;
    	
    	//usual case
    	ListNode *node,*pre,*next1,*next2;
    	pre=NULL;
    	node=head;
    	//in the head
    	if(node==head){
    		//(node,next1,next2)->(next1,node,next2)
    	//	cout<<node->val<<","<<next1->val<<","<<next2->val<<endl;
			next1=node->next;
			next2=node->next->next;
			head=next1;
			next1->next=node;
			node->next=next2;
			pre=node;
			
			node=next2;
    		
		}
		cout<<endl;
	//	cout<<head->val<<","<<head->next->val<<","<<head->next->next->val;
    	//continue;
        while(node!=NULL){
        	//(pre,node,next1,next2)->(pre,next1,'node',next2)
        	//cout<<pre->val<<";;;;;;;;;"<<endl;
   			next1=node->next;
			if(next1==NULL)break;
			next2=node->next->next;

			pre->next=next1;

			next1->next=node;
			node->next=next2;
			pre=node;
			
			node=next2; 
		}
        return head;
    }
};

int main(void){
	
	char str[]="1,2,3,5,6";
	char *pch;
	Solution aa;
	ListNode *head;
	ListNode *node;
	vector<int> list;
	pch=strtok(str,",");
	list.push_back(atoi(pch));
	while(pch!=NULL){
		pch=strtok(NULL,",");
		list.push_back(atoi(pch));
	}
	list.pop_back();
	
		
	#if 1
	node=head=new ListNode(list[0]);
	//cout<<head->val<<",";
	
	for(int idx=1;idx<list.size();idx++){
		node->next=new ListNode(list[idx]);
		//cout<<list[idx]<<",";
		//cout<<node->val<<",";
		node=node->next;
	}
	#endif
	
	node=head;
	cout<<endl;
	while(node!=NULL){
		cout<<node->val<<",";
		node=node->next;
	}
	
	cout<<endl<<"---------answer---------------"<<endl;
	head=aa.swapPairs(head);
	node=head;
	while(node!=NULL){
		cout<<node->val<<",";
		node=node->next;
	}	
	//cout<<node->val<<","<<node->next->val<<","<<node->next->next->val<<endl; 
/*	for(int idx=0;idx<list.size();idx++){
		cout<<node->val<<",";
		node=node->next;
	}
*/	
	return 0;
}


