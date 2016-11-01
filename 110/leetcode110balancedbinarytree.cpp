#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include<iostream>
using namespace std;
//DATE:2016/04/25    TIME:16:46:41

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
	int height(TreeNode* root){
		if(root==NULL) return 0;
		return max(height(root->left),height(root->right)) +1;
	}
    bool isBalanced(TreeNode* root) {
    	if(root==NULL) return true;
    	//if(root->left==NULL && root->right==NULL) return true;
    	return isBalanced(root->left ) && isBalanced(root->right) && 
    	       (abs(height(root->left)-height(root->right))<=1? 1:0);

    }
    
};
int main(void){
	
	TreeNode *root;
	root=new TreeNode(1);
	root->left=new TreeNode(2);
	root->left->left=new TreeNode(3);
	root->right=new TreeNode(4);
	root->right->right=new TreeNode(5);
	root->right->right->right=new TreeNode(6);
	Solution aa;
	cout<<aa.height(root)<<endl;
	cout<<aa.isBalanced(root);
	return 0;
}
