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

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //special case
		if(root==NULL) return NULL;
		if(root==p) return root;
		if(root==q) return root;
		//printf("\n%s %d\n",__FUNCTION__,__LINE__);
		TreeNode *l,*r;
		l=lowestCommonAncestor(root->left,p,q);
		r=lowestCommonAncestor(root->right,p,q);
		
    	if(l&&r) return root;
		//if root->left==p, and root->right==q
		
			
		return l? l:r;			
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
