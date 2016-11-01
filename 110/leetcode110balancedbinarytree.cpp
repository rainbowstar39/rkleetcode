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
		if(root->left==NULL && root->right==NULL) return 1;
		else max(height(root->left)+1,height(root->right)+1);
	}
    bool isBalanced(TreeNode* root) {
    	if(root==NULL) return true;
		if(root->left==NULL && root->right==NULL) return true;
		else {
			return isBalanced(root->left) && isBalanced(root->right)&&(abs(height(root->left)-height(root->right))>1? 0:1);
		}

    }
    
};
int main(void){
	return 0;
}
