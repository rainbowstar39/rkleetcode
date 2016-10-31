#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
struct element{
	bool yes=false;
	int index=0;
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	vector<int> result;
    
		int i,j;
 		i=0;
 		j=0;
 		int max=nums[0],min=0;
 		for(i=0;i<nums.size();i++){
 			if(max<nums[i])max=nums[i];
 			if(min>nums[i]) min=nums[i];
		 }
		 cout<<max<<";"<<min<<endl;
		vector<element> tt(max-min+1); 
		for(i=0;i<nums.size();i++){
			int idx=nums[i]-min;
			tt[idx].yes=true;
			tt[idx].index=i;
		}
		
		for(i=0;i<nums.size();i++){
			//if(nums[i]>target) continue;
			
			int jdx=target-nums[i]-min;
			if(jdx<0 || jdx>(max-min)) continue;
			if(tt[jdx].yes && i!=tt[jdx].index) {
				result.push_back(i);
				result.push_back(tt[jdx].index);
				break;
			}
			
		}
		return result;
        
    }
};
int main(void){
	vector<int>nums,result;
	int tmp;
	char str[]="-1,-2,-3,-4,-5";
	char *pch=strtok(str,",");
	tmp=atoi(pch);
	nums.push_back(tmp);
	while(pch!=NULL){
		
	
		pch=strtok(NULL,",");
		tmp=atoi(pch);
		nums.push_back(tmp);
	}
	
	nums.pop_back();//delet 0 in the end
	
	for(int idx=0;idx<nums.size();idx++)
	cout<<nums[idx]<<",";	 
	
	cout<<endl;
	
	
	Solution aa;
	result=aa.twoSum(nums,-8);
	for(int idx=0;idx<result.size();idx++)
	cout<<result[idx]<<",";	 
		
	return 0;
}
