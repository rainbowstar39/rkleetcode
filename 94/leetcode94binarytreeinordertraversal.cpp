//DATE:2016/04/24    TIME:22:14:46
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<vector>
#include<fstream>

using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  }; 
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<TreeNode*> ss;
        vector<int> result;
        if(root==NULL) return result;
        int rightnull=0;
        int leftnull=0;
        int stackflag=0;
        TreeNode *tmp;
    	while(root!=NULL){
    	//	cout<<root->val<<",";
    		
    		if(root->left==NULL || root->left->val=='#')leftnull=1;
    		else leftnull=0;
    		
    		if(root->right==NULL || root->right->val=='#')rightnull=1;
    		else rightnull=0;
    		
			if(stackflag==0){
				
				if(leftnull==0){
				//	printf("\n############%d %d\n",__LINE__,root->val);
					ss.push_back(root);
					root=root->left;
					
				}
				else if(rightnull==0){
				//	printf("\n############%d %d\n",__LINE__,root->val);
					result.push_back(root->val);
					root=root->right;					
				}
				else if(leftnull==1 && rightnull==1){
					result.push_back(root->val);
					if(ss.size()>0){

	    				tmp=ss.back();
	    				root=tmp;
	    				stackflag=1;
	    				ss.pop_back();
	    			//	printf("\n############%d %d\n",__LINE__,root->val);
					}
					else break;		
				}
			}
			else if (stackflag==1){
				result.push_back(root->val);
				if(rightnull==1){
					if(ss.size()>0){
	    				tmp=ss.back();
	    				root=tmp;
	    				stackflag=1;
	    				ss.pop_back();
	    			//	printf("\n############%d %d\n",__LINE__,root->val);
					}
					else break;
					
				}
				else {
					stackflag=0;
					root=root->right;
				}
			}

		}
		
		return result;
        
    }
};

int main(void){
	TreeNode *root=new TreeNode(1);
	//root->left=new TreeNode(1);
	
	root->left=new TreeNode(2);
//	root->right=new TreeNode(3);
//	root->left->left=new TreeNode(4);
//	root->right->left=new TreeNode(5);
	vector<int> result;
	
	Solution aa;
	result=aa.inorderTraversal(root);
	
	cout<<endl<<"-------------"<<endl;
	for(int idx=0;idx<result.size();idx++)
	cout<<result[idx]<<",";
	
	return 0;
}
