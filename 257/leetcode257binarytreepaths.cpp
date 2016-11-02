#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<sstream>
#include<vector>
#include<string>
using namespace std;
//DATE:2016/05/07    TIME:16:40:55
//wrong answer***********
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
	vector<int> inorder(TreeNode *root){
		vector<int> rr;
		if(root==NULL) return rr;

		TreeNode *node;
		bool leftsub=false;
		bool rightsub=false;
		vector<TreeNode*> ss;
		bool stackmode=false;
	
		while(root!=NULL){

			if(root->left)leftsub=true;
			else leftsub=false;
			if(root->right)rightsub=true;
			else rightsub=false;

			if(stackmode){
				if(rightsub){
					stackmode=false;
					if(ss.empty())
					rr.push_back(root->val);

					root=root->right;
					
				}
				else{
					rr.push_back(root->val);
					if(ss.empty())break;					
					root=ss.back();
					ss.pop_back();
				}

			}
			else {
				if(leftsub){
					ss.push_back(root);
					root=root->left;
					

				}
				else if(rightsub){
					rr.push_back(root->val);
					root=root->right;
					
				}
				else { //leaf
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
    vector<string> binaryTreePaths(TreeNode* root) {
    	string rr;
    	vector<string> finalrr;
    	if(root==NULL) return finalrr;
    	vector<int> pp;
    	vector<TreeNode*> ss;
    	bool leftsub=false;
    	bool rightsub=false;
    	bool stackmode=false;
    	TreeNode* node;
    	
    	while(root){
    		
    		if(root->left) leftsub=true;
    		else leftsub=false;
    		if(root->right) rightsub=true;
    		else rightsub=false;
    		
    		if(stackmode){
    			if(rightsub){
    				pp.push_back(root->val);
    				root=root->right;
    				stackmode=false;
				}
				else{
					if(ss.empty())break;
					root=ss.back();
					ss.pop_back();
				}
    			
			}
			else {
				if(leftsub){
					ss.push_back(root);
					pp.push_back(root->val);//path
					root=root->left;
				}
				else if(rightsub){
					pp.push_back(root->val);//path
					root=root->right;					
					
				}
				else {//leaf
				     pp.push_back(root->val);
					//finalrr.push_back(rr)
					//rr.push_back(pp[0]);
					stringstream tmp;
					tmp<<pp[0];
					for(int idx=1;idx<pp.size();idx++){
				
						tmp<<"->"<<pp[idx];
						
		//				cout<<pp[idx]<<",";
					}
		//			cout<<endl;
					finalrr.push_back(tmp.str());
					pp.clear();
					
					//pop the stack
					if(ss.empty()) break;
					root=ss.back();
					ss.pop_back();
					stackmode=true;
					//save pp (path) again
					for(int idx=0;idx<ss.size();idx++)
					{
						node=ss[idx];
						pp.push_back(node->val);
					}
					
					//break;				
					
				}
				
			}
		}
		
		return finalrr;

    }
};
int main(void){
	TreeNode *root;
	root=new TreeNode(1);
	root->left=new TreeNode(2);
	//root->left->left=new TreeNode(3);
	root->right=new TreeNode(4);
	root->right->right=new TreeNode(5);
	Solution aa;
	vector<int> rr;
	vector<string> finalrr;
	#if 0
	rr=aa.inorder(root);
	cout<<endl<<"-------------------ans------------------"<<endl;

	for(int idx=0;idx<rr.size();idx++)
	cout<<rr[idx]<<",";
	#endif
	
	finalrr=aa.binaryTreePaths(root);
	string rr2;
	//rr2.insert(rr2.end(),string(15));
	//cout<<rr2<<endl;
	for(int idx=0;idx<finalrr.size();idx++){
		rr2=finalrr[idx];
		cout<<rr2<<endl;
	}
	return 0;
}

