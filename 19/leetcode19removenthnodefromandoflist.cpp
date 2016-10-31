#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<fstream>
#include<vector>
#include<time.h>
//		12:47
//DATE:2016/04/20    TIME:01:20:42
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    	
    	//special case
    	if(head==NULL)return NULL;
    	ListNode *node;
    	ListNode *pre,*current,*nnext; 
    	int len=0;
    	node=head;
    	while(node!=NULL){
    		len++;
    		node=node->next;
		}
		//cout<<len<<";"<<endl;
		node=head;
		pre=NULL;
        for(int idx=0;idx<len;idx++){
        	if(idx==(len-(n))){
        		if(idx==0){
        			head=head->next;
        			break;
				}
        		
        		else
        		pre->next=node->next;
			}
			
        	    pre=node;
        		node=node->next;
		}
        
        return head;
    }
};

int main(void){
	return 0;
}
