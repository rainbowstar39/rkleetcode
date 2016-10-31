// 引入標準程式庫中相關的字串程式
#include <string>
 
#include <fstream>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
// std 為標準程式庫的名稱空間
using namespace std;
//18:30

int majorityElement(vector<int>& nums) {

	int len=0;
	len=nums.size()/2;
	int i,j;
	int result=nums[0];
	int count=0;
	//cout<<"len:"<<len<<endl;
	
	for(i=0;i<num.size();i++)
	{
			if(nums[i]==result)count++;
			else count--;
	}  
}
int main(void){
	vector<int> nums;
	nums.push_back(1);
	#if 0
	nums.push_back(2);
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(4);
	nums.push_back(4);
	#endif
	cout<<majorityElement(nums);
	
}
