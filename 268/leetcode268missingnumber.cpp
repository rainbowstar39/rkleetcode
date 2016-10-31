//include
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<vector>//vector
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
		int n=nums.size();
		int total=(n)*(n+1)/2;
		int sum=0;
		int idx;
		//special case    	
		if(nums.size()==0)return 0;
   		
   		for(idx=0;idx<nums.size();idx++)
   		{
   			sum+=nums[idx];		
		}
		
		
		return (total-sum);
		/*
    	int minval=nums.front();
    	int maxval=nums.front();
    	int total=nums.front();
    	int total2=0;
		int idx=0;
	//min,max,total
		for(idx=1;idx<nums.size();idx++)
		{
			if(nums[idx]<minval)
			minval=nums[idx];			
			if(nums[idx]>maxval)
			maxval=nums[idx];
			
			total+=nums[idx];

		}
		//cout<<minval<<","<<maxval<<","<<total<<endl;
		//cout<<"--------"<<endl;
		//get total2
		total2=(minval+maxval)*(maxval-minval+1)/2;
		
		return (total2-total);		
		
		*/

    }
};
//main
int main(void){
	
	vector<int> num2;
	Solution aa;
	num2.push_back(0);
	num2.push_back(1);
	num2.push_back(3);
	
	cout<<aa.missingNumber(num2);
	return 0;
}
