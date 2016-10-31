#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    //    vector<int> nums2;
        int idx;
        int tmp;
        //special case;//do we need to consider negative value?
        if (k==0) return;
        else {
        	//cout<<endl;
        	for(idx=0;idx<k;idx++){
		        tmp=nums.back();
		       // cout<<tmp<<endl;
				nums.pop_back();
		        nums.insert(nums.begin(),tmp);

			}
		}
    }
};
int main(void){

	Solution aa;
	vector<int> nums;
	char str[]="1,2,3,4,5,6,7";
	char *pch;
	
	pch=strtok(str,",");
	nums.push_back(atoi(pch));
	while(pch!=NULL){ 
	pch=strtok(NULL,",");
	//cout<<pch<<endl;
	nums.push_back(atoi(pch));
	} 
	
	
	
	
	for(int idx=0;idx<nums.size()-1;idx++)
	cout<<nums[idx]<<",";
		nums.pop_back();
	aa.rotate(nums,3);	
	#if 1
	cout<<endl;
	for(int idx=0;idx<nums.size();idx++)
	cout<<nums[idx]<<",";	
	#endif
	return 0;
}
