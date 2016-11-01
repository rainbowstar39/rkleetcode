#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<fstream>
#include<string.h>
#include<algorithm>
using namespace std;

//DATE:2016/04/27    TIME:20:02:50
//DATE:2016/04/27    TIME:22:38:37
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
    int minDepth(TreeNode* root) {
    	int min=0;
		if(root==NULL) return min;
		
		vector<TreeNode*> ss,ss2;
    	int stopflag=0;


		//ss.push_back(root);
		min++;//1
		if(root->left==NULL && root->right==NULL) {	
			return min;
		}
	//	printf("%s %d min:%d\n",__FUNCTION__,__LINE__,min);

		if(root->left || root->right){
					min++;//2
				
		//printf("%s %d min:%d\n",__FUNCTION__,__LINE__,min);

		}
		
		#if 0
		if(root->left==NULL || root->right==NULL){
			skewflag=1;
		}
		#endif
		
		if(root->left)
		ss.push_back(root->left);

		
		if(root->right)
		ss.push_back(root->right);	
		
		
		while(!ss.empty()){
			
			for(int idx=0;idx<ss.size();idx++){
				if(ss[idx]->left==NULL & ss[idx]->right==NULL){
					stopflag=1;
					break;
				}				

				if(ss[idx]->left){
					ss2.push_back(ss[idx]->left);

				}
				if(ss[idx]->right){
					ss2.push_back(ss[idx]->right);
				}
			}

			if(stopflag ){
				break;
			}			
			if(ss2.empty())
			break;
			
			min++;
			
			ss=ss2;
			ss2.clear();
		}
		
    	
    	return min;
        
    }
};
int main(void){
	TreeNode *root;
	root=new TreeNode(1);
	root->left=new TreeNode(2);
	root->left->left=new TreeNode(3);
	root->right=new TreeNode(3);
//	root->left->left=new TreeNode(4);
//	root->right->right=new TreeNode(5);
	
	Solution aa;
	cout<<aa.minDepth(root);
	return 0;
}
