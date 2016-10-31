#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<algorithm>//sort
#include<string.h>
#include<vector>
//DATE:2016/04/20    TIME:19:42:24
//DATE:2016/04/20    TIME:19:53:24
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    	if(nums.empty()) return false;
    	sort(nums.begin(),nums.end());
    	#if 0
    	for(int idx=0;idx<nums.size();idx++)
    	cout<<nums[idx]<<",";
    	#endif
    	
		for(int idx=0;idx<nums.size()-1;idx++){
			if(nums[idx]==nums[idx+1]) return true;
		}    	
        
        return false;
    }
};
int main(void){
	
	Solution aa;
	vector<int> nn;
	
	nn.push_back(11);
	nn.push_back(11);
	nn.push_back(0);
	cout<<endl<<"--------ans---------"<<endl;
	cout<<aa.containsDuplicate(nn);
	return 0;
}
