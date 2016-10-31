//include
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
	public:	
	vector<int> plusOne(vector<int>& digits)
	{
		int ridx=0;
		int carry=1;
		for(ridx=digits.size()-1;ridx>=0;ridx--){
			if(digits[ridx]==9 && carry==1){
				digits[ridx]=0;

				if(ridx==0)digits.insert(digits.begin(),1);
			}			
			else{
				digits[ridx]++;
				carry=0;
				break;
			}
		}
		return digits;
			
	} 
};

void printvector(vector<int>&digits)
{
	int idx=0;
	for(idx=0;idx<digits.size();idx++)
	cout<<digits[idx];
		
}
//main
int main(void){
	
	vector<int> nums;
	Solution aa;
	nums.push_back(9);
	nums.push_back(0);
	aa.plusOne(nums);
	printvector(nums);
	return 0;
}

