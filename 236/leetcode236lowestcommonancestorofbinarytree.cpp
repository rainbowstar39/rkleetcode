#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<vector>
using namespace std;
//DATE:2016/04/25    TIME:15:39:58
//DATE:2016/04/25    TIME:16:10:17
//accepted

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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
	
public:
	bool checkexists(TreeNode* root, TreeNode* n){
		if(root==NULL) return false;
		//printf("\n%s %d *root:%d *n:%d\n",__FUNCTION__,__LINE__,root->val,n->val);
		if(root==n) return true;
		if(checkexists(root->left,n)==false) return checkexists(root->right,n);
		
		return checkexists(root->left,n);
	}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //special case
		if(root==NULL) return NULL;
		if(root==p) return root;
		if(root==q) return root;
		//printf("\n%s %d\n",__FUNCTION__,__LINE__);
		if( checkexists(root->left,q)==false && checkexists(root->left,p)==false ) return lowestCommonAncestor(root->right,p,q);
		if( checkexists(root->right,q)==false && checkexists(root->right,p)==false ) return lowestCommonAncestor(root->left,p,q);
		
		return root;
			
    }
};
int main(void){
	
	TreeNode *root=new TreeNode(2);
	root->left=new TreeNode(1);
	root->right=new TreeNode(3);	
	root->left->left=new TreeNode(5);
	root->left->right=new TreeNode(6);
	//TreeNode *p=new TreeNode(4);
	//TreeNode *q=new TreeNode(5);
	vector<TreeNode*> plst;
	Solution aa;
	TreeNode *tmp;

	tmp=aa.lowestCommonAncestor(root,root->left->left,root->left->right);
	if(tmp!=NULL)
	cout<<tmp->val<<endl;
	else cout<<"NULL"<<endl;
	return 0;
}
