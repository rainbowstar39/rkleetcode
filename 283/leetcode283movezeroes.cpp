//20161031 
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<string.h>
#include <iostream>
#include <bitset>
#include <climits>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
		if(nums.size()<=1) return;  
		int current=0;
		int nxt=current+1;
		//remove the insertions & deletions of vectors to improve performance
		while(current<nums.size() && nxt<nums.size()){
			if(nums[current]==0){
				if(nums[nxt]==0)nxt++;
				else{
					nums[current]=nums[nxt];
					nums[nxt]=0;
					nxt++;
					current++;
				}
			}
			else{
				current++;
				nxt++;
			}
		}
		
    }
};

int main(void){
	Solution ss;
	
	vector<int> a;
    a.push_back(0);
    a.push_back(1);
    a.push_back(0);
    a.push_back(3);
    a.push_back(12);
	ss.moveZeroes(a);
	return 0;
}
