#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<vector>
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
 //DATE:2016/04/25    TIME:21:22:57
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  }; 
class Solution {
public:
	bool comp(TreeNode *a,TreeNode *b){
//		cout<<endl<<a->val<<","<<b->val<<endl;
		if(a==NULL && b==NULL) return true;
		if(a!=NULL && b!=NULL && a->val!=b->val) return false;
		if(a!=NULL && b==NULL) return false;
		if(a==NULL && b!=NULL) return false; 
//		if( a->val!=b->val ) return false;
//		 if(a==NULL || b==NULL) return false;
		
		 
		
		return comp(a->left,b->right) && comp(a->right,b->left);
	}
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
		return comp(root->left,root->right);       

    }
};
int main(void){
	Solution aa;
	TreeNode *root=new TreeNode(1);
	root->left=new TreeNode(2);
	//root->right=new TreeNode(2);
//	root->left->left=new TreeNode(3);
//	root->left->right=new TreeNode(4);
//	root->right->left=new TreeNode(4);
//	root->right->right=new TreeNode(3);
	cout<<aa.isSymmetric(root);
	return 0;
}
