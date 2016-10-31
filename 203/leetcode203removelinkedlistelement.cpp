#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string.h>
#include<fstream>
using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
  
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
    	
    	//special case
    	//empty list
    	if (head==NULL) return NULL;
    	//val is not in the list
    	
    	
    	//usual case
    	//if there are 2 elemnts of val in the list, what to do
    	ListNode *current,*prenode;
    	current=head;
    	prenode=NULL;
    	while(current!=NULL){
    		if(current->val==val){
    			if(current==head){
    				head=head->next;
				}
				else{
					prenode->next=current->next;
					
				}
				
			}
			
			else prenode=current;
    		current=current->next;
		}
		
		return head;
        
    }
}; 
int main(void){
	
	Solution aa;
	//char stra[]="4,4,1,2,3,4,4,5";
	char stra[]="4";
	vector<int> list;
	
	char *pch;
	pch=strtok(stra,",");
	list.push_back(atoi(pch));
	
	while(pch!=NULL){
		pch=strtok(NULL,",");
		list.push_back(atoi(pch));
	}	
	list.pop_back();
	
	ListNode *head;
	ListNode *node;
	head=new ListNode(list[0]);
	node=head;
	for(int idx=1;idx<list.size();idx++){
		node->next=new ListNode(list[idx]);
		node=node->next;
	}
//	node=NULL;//to avoid infinite loop

	node=head;
	while(node!=NULL){
		cout<<node->val<<",";
		node=node->next;
	}
	
	cout<<endl;
	cout<<"-----answer------------"<<endl;
	
	node=aa.removeElements(head,4);
	while(node!=NULL){
		cout<<node->val<<",";
		node=node->next;
	}
	return 0;
}
