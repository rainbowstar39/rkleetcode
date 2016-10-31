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
int singleNumber(vector<int>& nums) {
	int i;
	int result=nums[0];
	for(i=1;i<nums.size();i++){
		
		result^=nums[i];
	}
	return result;
}
int main(void){
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(3);
	cout<<singleNumber(nums);
}
