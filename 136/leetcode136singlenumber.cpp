// �ޤJ�зǵ{���w���������r��{��
#include <string>
 
#include <fstream>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
// std ���зǵ{���w���W�٪Ŷ�
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
