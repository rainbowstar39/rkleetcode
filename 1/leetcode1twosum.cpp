#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    	vector<int> result;
    	int i,j;
    	//vector<int>::iterator it,jt;
    	//it=nums.begin();
    	i=0;
    	for(i=0;i<nums.size();i++){
	    	for(j=i+1;j<nums.size();j++){

	    		if((nums[j]+nums[i])==target){
	    			result.push_back(i);
	    			result.push_back(j);
	    			break;
				}
	
			}
		}
		
		return result;
        
    }
};
int main(void){
	vector<int>nums,result;
	int tmp;
	char str[]="2, 7, 11, 15";
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
	
	Solution aa;
	result=aa.twoSum(nums,9);
	for(int idx=0;idx<result.size();idx++)
	cout<<result[idx]<<",";	 
		
	return 0;
}
