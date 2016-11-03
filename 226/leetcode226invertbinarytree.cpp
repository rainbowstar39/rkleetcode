// 引入標準程式庫中相關的字串程式
#include <string>
 
#include <fstream>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
// std 為標準程式庫的名稱空間
using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 #define TRUE 1
 #define FALSE 0
TreeNode* invertTree(TreeNode* root) {
	TreeNode* tmp;
	 
	if(root==NULL)
	return NULL;
	else if(root->left!=NULL || root->right!=NULL){

		tmp=invertTree(root->right);
		root->right=invertTree(root->left);
		root->left=tmp;
	}
	return root;
        
}

void printtree(TreeNode *p)
{
	if(p==NULL){
		cout<<"NULL->";
	return;
	}
	
	else {
		cout<<"("<<p->val<<"->";
		printtree(p->left);
		printtree(p->right); 
		cout<<")";
	}
}
 int main(void){

	TreeNode* p= new TreeNode(1);
	p->left=new TreeNode(2); 
	p->right=new TreeNode(3);
	p->left->left=new TreeNode(4);
	p->left->right=new TreeNode(5);
	printtree(p);
	cout<<endl;
	p=invertTree(p);
	 printtree(p);

	
}
