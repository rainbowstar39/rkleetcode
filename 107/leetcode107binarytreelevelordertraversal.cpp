#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<string.h>
#include<vector>
using namespace std;
//DATE:2016/04/27    TIME:12:15:56
//DATE:2016/04/27    TIME:12:49:21
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
    vector<vector<int> > levelOrderBottom(TreeNode* root) {
  		      vector<vector<int> > rr,rr2;
  		      if(root==NULL) return rr;
  		      vector<TreeNode*> ss,ss2;
			  vector<int> tt;
			  TreeNode *tmp;
			  int idx;
			    		     
			  tt.push_back(root->val);
			  rr.push_back(tt);
			  ss.push_back(root);
			  
			  if(root->left==NULL && root->right==NULL) return rr;
			  tt.clear();
			  while(ss.size()>0){
					for(idx=0;idx<ss.size();idx++){
						tmp=ss[idx];
						//cout<<tmp->val<<",";
						if(tmp->left) {
							ss2.push_back(tmp->left);
							tt.push_back(tmp->left->val);
						}
						if(tmp->right) {
							ss2.push_back(tmp->right);
							tt.push_back(tmp->right->val);
						}
					}			  	
					if(ss2.empty()) break;
					ss=ss2;
					rr.push_back(tt);
					tt.clear();
					ss2.clear();
			  }				  
			  
			  for(idx=rr.size()-1;idx>=0;idx--){
			  	rr2.push_back(rr[idx]);
			  }
			  
			  return rr2;
    }
};

int main(void){
	
	Solution aa;
	TreeNode* root; 
	root=new TreeNode(1);
	root->left=new TreeNode(3);
	root->right=new TreeNode(4);
//	root->left->left=new TreeNode(5);
	root->right->right=new TreeNode(7);
	vector< vector<int> > rr;
	vector<int> tmp;
	rr=aa.levelOrderBottom(root);

	cout<<endl<<"---------ans--------------"<<endl;
	for (int idx=0;idx<rr.size();idx++){
		tmp=rr[idx];
		for(int jdx=0;jdx<tmp.size();jdx++)
		cout<<tmp[jdx]<<",";
	}
	return 0;
}
