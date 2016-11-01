#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
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
 //DATE:2016/04/24    TIME:16:38:18
//DATE:2016/04/24    TIME:17:34:45 run time error(while loop or access to null pointer)// time limit
//DATE:2016/04/24    TIME:18:23:56 accepted
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
}; 
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
   		vector<int> result;
   		result.clear();
		if(root==NULL) return result;

		vector<TreeNode*> ss;//stack 
   		int leftnull=0;
		int rightnull=0;
		//common case
		//VLR
		TreeNode *tmp;
		tmp=NULL;

		
		while(root){
				result.push_back(root->val);
			//	cout<<root->val<<endl;
				
				if (root->right==NULL || root->right->val=='#')rightnull=1;
				else if(root->right!=NULL) {
					
					rightnull=0;
				}
				
				if(root->left==NULL || root->left->val=='#')leftnull=1;
				else if(root->left!=NULL){
					leftnull=0;
				} 
				
				if(leftnull==1 && rightnull==1 )
				{
					if(ss.empty()) return result;
					else{
						//pop stack
						tmp=ss.back();
						//cout<<tmp->val<<endl;
						ss.pop_back();
						//result.push_back(tmp->val);
						root=tmp;

					}
				}
				#if 1
				else if(leftnull==1 && rightnull==0){
					//ss.push_back(root->right);//make duplicate
					root=root->right;
					
				}
				#endif
				else if(leftnull==0 && rightnull==1){
					root=root->left;
				}
				else{
					ss.push_back(root->right);
					root=root->left;
				}
				
										
		}
		
		return result;
        
    }
};

int main(void){
	TreeNode *tmp;
	tmp=new TreeNode(1);
	tmp->left=new TreeNode(2);
	tmp->right=new TreeNode(3);
	
	vector<int> result;
	Solution aa;
	result=aa.preorderTraversal(tmp);
	
	for(int idx=0;idx<result.size();idx++){
		cout<<result[idx]<<endl;
	}
	return 0;
}
