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
    	vector< vector<int> > rr,rr2;
    	if(root==NULL) return rr;
    	
    	vector<int> tt,tt2;
    	vector<TreeNode*> ss,ss2;
		int idx;
		ss.push_back(root);
		tt.push_back(root->val);
		rr.push_back(tt);
	    	
    	if(root->left==NULL && root->right==NULL)
        return rr;
    
        rr2=rr;
        while(ss.size()>0){
    		ss2.clear();   
			tt.clear(); 	
        	for(idx=0;idx<ss.size();idx++){
        		if(ss[idx]->left){
        		//	cout<<ss[idx]->left->val<<",";
					tt.push_back(ss[idx]->left->val);
					ss2.push_back(ss[idx]->left);
				}
        		if(ss[idx]->right){
        		//	cout<<ss[idx]->right->val<<",";
					tt.push_back(ss[idx]->right->val);
					ss2.push_back(ss[idx]->right);
				}
			}
			if(ss2.size()>0){
				ss=ss2;
				rr2.push_back(tt);
	
			} 
			else {
				break;
			}
			
		}
		
		int jdx=0;
		rr=rr2;
		for(int idx=rr2.size()-1;idx>=0;idx--){
			rr[jdx++]=rr2[idx];
		}
		return rr;
        
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
