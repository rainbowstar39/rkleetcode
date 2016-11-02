#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
//DATE:2016/05/08    TIME:15:49:23
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
class Solution {
public:

    vector<string> binaryTreePaths(TreeNode* root) {
    //fail
		vector<string> finalrr;
		vector<string> strstack;
		string str;
		stringstream sst;
		if(root==NULL) return finalrr;
		vector<TreeNode*> ss;//stacknode
		
		
		bool leftsub=false,rightsub=false;
		bool preleftsub=false,prerightsub=false;
	    bool stackmode=false;
		
		while(root!=NULL){
			if(root->left)
			leftsub=true;
			else leftsub=false;
			
			if(root->right)
			rightsub=true;
			else rightsub=false;
			
			if(stackmode){
				if(rightsub){
					root=root->right;
					stackmode=false; 
					
				}
				else {
					if(ss.empty()) break;
					root=ss.back();
					ss.pop_back();
					
					sst.str("");
					sst.clear();
					sst<<strstack.back();
					strstack.pop_back();
				}
				
			}
			else {
				if(leftsub){
					sst<<root->val<<"->";
					strstack.push_back(sst.str());
					ss.push_back(root);
					root=root->left;
				}	
				else if(rightsub){
					sst<<root->val<<"->";
					root=root->right;					
				}
				else {
					//leaf
					stackmode=true;					
							
					sst<<root->val;

					finalrr.push_back(sst.str());
					
					
					if(ss.empty()) break;
					root=ss.back();
					ss.pop_back();
					
					
					sst.str("");
					sst.clear();
					sst<<strstack.back();
					//cout<<"****"<<sst.str()<<endl;
					strstack.pop_back();
					
				}
			}
			
		}
		 return finalrr;
        
    }
};
int main(void){
	vector<string> rr;
	Solution aa;
	TreeNode* root; 	
	root=new TreeNode(1);
	root->left=new TreeNode(3);
	root->right=new TreeNode(4);
	root->left->left=new TreeNode(5);
	root->left->right=new TreeNode(6);
	root->right->right=new TreeNode(7);	
	rr=aa.binaryTreePaths(root);
	cout<<endl<<"---------ans--------------"<<endl;
	for(int idx=0;idx<rr.size();idx++){
		cout<<rr[idx]<<endl;
	}
	return 0;
}
