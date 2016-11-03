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
	bool isSameTree(TreeNode* p, TreeNode* q) {
		bool returnval=FALSE;
		if(p==NULL&&q==NULL){ 
		return TRUE;
		} 
		else if(p!=NULL &&q==NULL){ 
		return FALSE;
		} 
		else if(p==NULL && q!=NULL){ 
		return FALSE;
		}		
	    if(p->val!=q->val)
		return false;
		else if(p->val==q->val)
		{
			returnval=TRUE;
			returnval &= isSameTree(p->left,q->left);
			returnval &=isSameTree(p->right,q->right);
			return returnval;
			
		}
}

 int main(void){

	TreeNode* p= new TreeNode(1);
	p->left=new TreeNode(2); 
	
	TreeNode* q= new TreeNode(1);
	q->right=new TreeNode(3);

	bool val;
	val=isSameTree(p,q);
	if(val==TRUE)cout<<"TRUE"<<endl;
	else cout<<"FALSE"<<endl;
	
}
