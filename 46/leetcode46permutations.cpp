#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include <algorithm>    // std::swap
#include<vector>
using namespace std;
//46. Permutations
class Solution {
	
	vector< vector<int> > rr;
//	vector<int> element;
public:
	/*
	void test(vector<int> nums){
	//	swap(nums[0],nums[1]);
		
		nums.push_back(4);	
		cout<<"\n----------------\n";
		for(int idx=0;idx<nums.size();idx++)
		cout<<nums[idx]<<",";		
		cout<<"\n----------------\n";
				
		return;
	}
	*/
	void permutation(vector<int>& nums, int from, int to){
		
		//cout<<"from:"<<from<<"to:"<<to<<endl;

		if(from==to){
			//element.push_back(nums[from]);
			rr.push_back(nums);
			#if 0
			for(int idx=0;idx<element.size();idx++)
			cout<<element[idx]<<",";		
		//	element.clear();
			cout<<endl;
			#endif
			return ;
		}	

		for(int idx=from;idx<=to;idx++){
			swap(nums[from],nums[idx]);
		//	cout<<"from:"<<from<<"swap to:"<<idx<<endl;
		//for(int jdx=0;jdx<=from;jdx++)
		//element.push_back(nums[jdx]);
		//element.push_back(nums[from]);
		//	cout<<nums[from]<<",";

			permutation(nums,from+1,to);
//			rr.push_back(permute(nums));


			swap(nums[idx],nums[from]);	
			
	
		}
		
		return;			
		
	}
    vector<vector<int> > permute(vector<int>& nums) {
        
        if (nums.empty()) {
        	rr.clear();
			return rr;			
		}
		
		permutation(nums,0,nums.size()-1);
				
		return rr;
		
        
    }
};

int main(void){
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);
	Solution aa;
	#if 0
	aa.test(nums);
	for(int idx=0;idx<nums.size();idx++)
	cout<<nums[idx]<<",";
	
	cout<<endl;
	#endif
	
	#if 1
	vector< vector<int> > rr;
	rr=aa.permute(nums);
	cout<<"\n----------------------\n";
	for(int idx=0;idx<rr.size();idx++){
		for(int jdx=0;jdx<rr[idx].size();jdx++){
			cout<<rr[idx][jdx]<<",";
		}
		cout<<endl; 
	}
	#endif
	return 0;
}
