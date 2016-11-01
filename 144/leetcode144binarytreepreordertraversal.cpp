#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include<fstream>

using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 //DATE:2016/04/24    TIME:16:38:18
//DATE:2016/04/24    TIME:17:34:45 run time error(while loop or access to null pointer)// time limit
//DATE:2016/04/24    TIME:18:23:56 accepted
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
}; 
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<TreeNode*> ss;
        //TreeNode node;
        vector<int> rr;
        bool stackmode=false;
        bool leftsub=false;
        bool rightsub=false;
        if(root==NULL) return rr;
        
      //  ss.push_back(root);
        while(root){
        	if(root->left)leftsub=true;
        	else leftsub=false;
        	if(root->right) rightsub=true;
        	else rightsub=false;
        	
        	if(stackmode){
        		if(rightsub){
        			//have right
        			root=root->right;
        			stackmode=false;
				}
				else {
					//no right
					if(ss.empty())break;
					root=ss.back();
					ss.pop_back();
				}
				 
			}
			else {
				if(leftsub){
					rr.push_back(root->val);
					ss.push_back(root);
					root=root->left;
				}
				else if(rightsub){
					rr.push_back(root->val);
					root=root->right;
				}
				else {
					//leaf
					//no child
					
					rr.push_back(root->val);
					if(ss.empty()) break;
					root=ss.back();
					ss.pop_back();
					stackmode=true;
				}
				
			}
        	
        	
		}
		
		return rr;
    }
};
int main(void){
	TreeNode *root;
	root=new TreeNode(1);
	root->left=new TreeNode(3);
	root->right=new TreeNode(4);
//	root->left->left=new TreeNode(5);
	root->right->right=new TreeNode(7);
	
	vector<int> result;
	Solution aa;
	result=aa.preorderTraversal(root);
	
	for(int idx=0;idx<result.size();idx++){
		cout<<result[idx]<<endl;
	}
	return 0;
}
