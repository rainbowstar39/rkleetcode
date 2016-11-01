#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
#include<string.h>
using namespace std;
//DATE:2016/04/29    TIME:17:47:56
//DATE:2016/04/29    TIME:17:57:59 wrong answer
//DATE:2016/04/29    TIME:18:04:22 wrong answer  should be more careful
//DATE:2016/04/29    TIME:18:06:46
//DATE:2016/04/29    TIME:18:10:43 try to tune performance
//
struct node{
	int cnt;
	int val;
};
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    	vector<int> rr;
  
    	if(nums.empty()) return rr;
    	if(nums.size()==1)return nums;
    	
		int thebits=nums[0];
	//	int andbits=nums[0];
		for(int idx=1;idx<nums.size();idx++){
			thebits^=nums[idx];
	//		andbits&=nums[idx];
		}
		
		thebits=(thebits&(thebits-1))^thebits;//important
		//how to get the last different bit of A and B
		
		int t1=0,t2=0;
		for(int idx=0;idx<nums.size();idx++){
			if(nums[idx]&thebits)t1^=nums[idx];
			else t2^=nums[idx];
		}
		rr.push_back(t1);
		rr.push_back(t2);
		return rr;
    }
};

int main(void){
	
	Solution aa;
	vector<int> rr;
	vector<int> nums;
	char str[]="1, 2, 1, 3, 2, 5";
	char *pch;
	pch=strtok(str,",");
	nums.push_back(atoi(pch));
	while(pch!=NULL){
		pch=strtok(NULL,",");
		nums.push_back(atoi(pch));
	}
	nums.pop_back();
	
	
	rr=aa.singleNumber(nums);
	
	for(int idx=0;idx<rr.size();idx++)
	cout<<rr[idx]<<",";
	
	return 0;
}
