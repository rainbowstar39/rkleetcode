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
    	
    	//special case;
    	vector<vector<int> > rr;
    	vector<int> tmp;
    	vector<TreeNode*> ss,ss2;
    	if(root==NULL) return rr;

    	tmp.push_back(root->val);
    	ss.push_back(root);
    	rr.push_back(tmp);
      	if(root->left==NULL && root->right==NULL) {	
    		return rr;
		}
		int idx=0;
		while(ss.size()>0){
			tmp.clear();
			for(idx=0;idx<ss.size();idx++){
			//	cout<<ss[idx]->val<<endl;
				if(ss[idx]->left){
					ss2.push_back(ss[idx]->left);
					tmp.push_back(ss[idx]->left->val);
				}
				if(ss[idx]->right){
					ss2.push_back(ss[idx]->right);
					tmp.push_back(ss[idx]->right->val);
				}
			}
			
			if(tmp.size()>0)
			rr.push_back(tmp);
			
			else break;
			
			ss.clear();
			ss=ss2;
			ss2.clear();			
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
