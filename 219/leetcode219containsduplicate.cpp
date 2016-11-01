#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
//DATE:2016/04/22    TIME:13:18:35
//DATE:2016/04/22    TIME:13:43:56
struct node{
	int idx;
	int val;
	
};
bool comp(node i,node j){
	return i.val<j.val;
}
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    	vector<node> aa;
    	int idx;
    	struct node tmp;
    	//special case
    	
    	if(nums.empty()) return false;
    	if(nums.size()==1) return false;
    	//usual case
    	for(idx=0;idx<nums.size();idx++){
			tmp.idx=idx;
			tmp.val=nums[idx];
    		aa.push_back(tmp);
		}
		
		for(idx=0;idx<nums.size();idx++){
			cout<<"before sort:"<<aa[idx].idx<<","<<aa[idx].val<<endl;
		}
		sort(aa.begin(),aa.end(),comp);
		for(idx=0;idx<nums.size();idx++){
			cout<<"after sort:"<<aa[idx].idx<<","<<aa[idx].val<<endl;
		}		
		for(idx=0;idx<nums.size()-1;idx++){
			if( (aa[idx].val==aa[idx+1].val) && 
			    ((aa[idx+1].idx-aa[idx].idx)<=k) )
			    return true;
			

		}
		
		return false;
        
    }
};
int main(void){
	char stra[]="2,3,5,2,7,4";
	char *pch;
	vector<int> lst;
	pch=strtok(stra,",");
	lst.push_back(atoi(pch));
	while(pch!=NULL){
		pch=strtok(NULL,",");
		lst.push_back(atoi(pch));
	}
	lst.pop_back();
	
	Solution aa;
	cout<<aa.containsNearbyDuplicate(lst,2);
	
	return 0;
}
