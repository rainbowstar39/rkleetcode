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
		printf("\n%s %d\n",__FUNCTION__,__LINE__);
		return  1+max(height(root->left),height(root->right));
	}
    bool isBalanced(TreeNode* root) {
    	if(root==NULL) return true;
    	printf("\n%s %d\n",__FUNCTION__,__LINE__);
		if(abs(height(root->left)-height(root->right))>1) return false;

		return isBalanced(root->left) && isBalanced(root->right);

    }
    
};
int main(void){
	
	TreeNode *root;
	root=new TreeNode(1);
	root->left=new TreeNode(2);
	root->left->right=new TreeNode(3);
	Solution aa;
	cout<<aa.isBalanced(root);
	return 0;
}
