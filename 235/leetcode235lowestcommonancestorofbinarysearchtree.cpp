#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<vector>
using namespace std;
//DATE:2016/04/25    TIME:15:39:58
//DATE:2016/04/25    TIME:16:10:17

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
  #define MAX(x,y,z) ((x>y?1:0) & (x>z?1:0))
  #define MIN(x,y,z) ((x<y?1:0) & (x<z?1:0))
class Solution {
public:
	bool checkmax(TreeNode *root,TreeNode *p, TreeNode *q){
		if(MAX(root->val,p->val,q->val))	
		return true;
		
		return false;
	}
	bool checkmin(TreeNode *root,TreeNode *p,TreeNode *q){
		if(MIN(root->val,p->val,q->val))	
		return true;
		
		return false;
	}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //special case
		if(root==NULL) return root;
		bool ifmax=0,ifmin=0;
   

			if(root->val==p->val && p->val>q->val) return root;
			if(root->val==q->val && p->val>q->val) return root;
			
			ifmax=checkmax(root,p,q);
			ifmin=checkmin(root,p,q);
						
			if(ifmax==false && ifmin==false) return root;
			if(ifmax==true) return lowestCommonAncestor(root->left,p,q);
			if(ifmin==true) return lowestCommonAncestor(root->right,p,q);
			

		

        return NULL;
    }
};

int main(void){
	
	TreeNode *root=new TreeNode(4);
	root->left=new TreeNode(2);
	root->right=new TreeNode(5);	
	root->left->left=new TreeNode(1);
	root->left->right=new TreeNode(3);
	Solution aa;
	TreeNode *tmp;
	//cout<<(3&10)<<endl;
	//cout<<aa.checkmax(root,root->left,root->right)<<endl;
	tmp=aa.lowestCommonAncestor(root,root,root->left);
	cout<<tmp->val<<endl;
	return 0;
}
