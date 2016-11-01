#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<vector>
#include<string.h>
using namespace std;
//DATE:2016/04/27    TIME:00:43:57
//DATE:2016/04/27    TIME:02:14:46
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
    vector<vector<int> > levelOrder(TreeNode* root) {
 		vector<vector<int> > rr;
		 if(root==NULL) return rr;
		 vector<TreeNode*> lst,tmp;
		 
		 vector<int> tt;
		 TreeNode *node;
		 tt.push_back(root->val);
		 //cout<<tt.back()<<",";
		 rr.push_back(tt);
		 tt.clear();
		 if(root->left==NULL && root->right==NULL) return rr;
		 
		 lst.push_back(root);		 
		 while(lst.size()>0){
		 	for(int idx=0;idx<lst.size();idx++){
		 		 node=lst[idx];
		 		 
		 		 if(node->left){
				  tmp.push_back(node->left);
     		 	  tt.push_back(node->left->val);
     		 	  //cout<<tt.back()<<",";
				  }
		 		 if(node->right){
				  tmp.push_back(node->right);
				  tt.push_back(node->right->val);
				  //cout<<tt.back()<<",";
				  }
			 }
			 	
			 if(tmp.empty()) break;
			  		 
			 lst=tmp;
			 rr.push_back(tt);	
			 tt.clear();		
			 tmp.clear();

		 }       
		 return rr;
    }
   
        
    
};

int main(void){
	Solution aa;
	TreeNode* root;
	vector< vector<int> > rr;
	vector<int> tmp;
	root=new TreeNode(1);
	root->left=new TreeNode(2);
	root->right=new TreeNode(3);
	root->right->left=new TreeNode(4);
	rr=aa.levelOrder(root);
	cout<<endl<<"------------------"<<endl;
	for(int idx=0;idx<rr.size();idx++){
		tmp=rr[idx];
		for(int jdx=0;jdx<tmp.size();jdx++){
			cout<<tmp[jdx]<<",";
		} 
	}
	return 0;
}
