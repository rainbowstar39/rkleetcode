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
    vector<vector<int> > zigzagLevelOrder(TreeNode* root) {
			vector<vector<int> > rr;
			vector<TreeNode*> lst,tmp;
			TreeNode *node,*node2;
			vector<int> tt;
			
			if(root==NULL) return rr;
			int cnt=1;
			lst.push_back(root);
			while(lst.size()>0){
			//	printf("%s %d\n",__FUNCTION__,__LINE__);	
				int n=lst.size()-1;			
				for(int idx=lst.size()-1;idx>=0;idx--){
					node=lst[idx];
					
					node2=lst[n-idx];
					tt.push_back(node2->val);					
					if(cnt%2){
						//right->left
						if(node->right) tmp.push_back(node->right);
						if(node->left)  tmp.push_back(node->left);
					}
					else{
						//left->right 
						if(node->left)  tmp.push_back(node->left);
						if(node->right) tmp.push_back(node->right);
						
					}

				}
				//printf("%s %d\n",__FUNCTION__,__LINE__);				

				cnt++;
			//	printf("%s %d\n",__FUNCTION__,__LINE__);				
				rr.push_back(tt);
				if(tmp.empty()) break;
				lst=tmp;
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
	root->left->left=new TreeNode(4);
	root->left->right=new TreeNode(5);
	root->right->left=new TreeNode(6);
	root->right->right=new TreeNode(7);
	root->left->left->left=new TreeNode(8);
	root->left->left->right=new TreeNode(9);
	root->left->right->left=new TreeNode(10);
	root->left->right->right=new TreeNode(11); 
	rr=aa.zigzagLevelOrder(root);
	cout<<endl<<"------------------"<<endl;
	for(int idx=0;idx<rr.size();idx++){
		tmp=rr[idx];
		for(int jdx=0;jdx<tmp.size();jdx++){
			cout<<tmp[jdx]<<",";
		} 
	}
	return 0;
}
