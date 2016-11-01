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
class Solution {
public:

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //special case
		if(root==NULL) return NULL;
		//printf("\n%s %d\n",__FUNCTION__,__LINE__);
		
		if(p->val<root->val && q->val<root->val)
		return lowestCommonAncestor(root->left,p,q);
		if(p->val>root->val && q->val>root->val)
		return lowestCommonAncestor(root->right,p,q);
		if(p->val<=root->val && root->val<q->val)
		return root;
		if(p->val>=root->val && root->val>q->val)
		return root;		
		if(p->val<root->val && root->val<=q->val)
		return root;
		if(p->val>root->val && root->val>=q->val)
		return root;
		
		return NULL;
			
    }
};

int main(void){
	
	TreeNode *root=new TreeNode(2);
	root->left=new TreeNode(1);
	root->right=new TreeNode(3);	
	//TreeNode *p=new TreeNode(4);
	//TreeNode *q=new TreeNode(5);
	Solution aa;
	TreeNode *tmp;
	tmp=aa.lowestCommonAncestor(root,root,root->right);
	if(tmp!=NULL)
	cout<<tmp->val<<endl;
	else cout<<"NULL"<<endl;
	return 0;
}
