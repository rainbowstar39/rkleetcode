#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<fstream>
#include<string.h>
#include<algorithm>
using namespace std;

//DATE:2016/04/27    TIME:20:02:50
//DATE:2016/04/27    TIME:22:38:37
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
    int minDepth(TreeNode* root) {
        //get the level //level order
        TreeNode *node;
        vector<TreeNode*> ss,ss2;
        int depth=0;
		if(root==NULL) return depth;
        depth++;//root
        if(root->left==NULL && root->right==NULL)
        return depth;
        
        ss.push_back(root);
        while(ss.size()>0){
        	for(int idx=0;idx<ss.size();idx++){
        		node=ss[idx];
        		if(node->left==NULL && node->right==NULL)
        		return depth;
        		if(node->left) ss2.push_back(node->left);
        		if(node->right) ss2.push_back(node->right);
			}
			if(ss2.empty()) break;
			depth++;
			ss=ss2;
			ss2.clear()	;
					
		}
		
		return depth;
		
		
        
    }
};
int main(void){
	TreeNode *root;
	root=new TreeNode(1);
	root->left=new TreeNode(2);
	root->left->left=new TreeNode(3);
	root->right=new TreeNode(3);
//	root->left->left=new TreeNode(4);
//	root->right->right=new TreeNode(5);
	
	Solution aa;
	cout<<aa.minDepth(root);
	return 0;
}
