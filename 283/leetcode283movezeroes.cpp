//include
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>//vector

//
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    	int totalzero=0;
    	int idx=0;
    	for(idx=0;idx<nums.size();idx++){
    		if(nums[idx]==0){
    			totalzero++;
    			nums.erase(nums.begin()+idx);
    			idx--;
			}
		}
		
		for(idx=0;idx<totalzero;idx++){
			nums.push_back(0);
		}
        
    }
};
//main
int main(void){
	
	int idx;
	Solution aa;
	vector<int> num2;
	num2.push_back(0);
//	num2.push_back(1);
	num2.push_back(0);
//	num2.push_back(3);
//	num2.push_back(12);
	
	
	aa.moveZeroes(num2);
	for(idx=0;idx<num2.size();idx++)
	cout<<num2[idx]<<endl;
	
	return 0;
}
