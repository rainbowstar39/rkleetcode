//include
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
	{
    	vector<int>::iterator it;
    	//special case 0
    	if(nums.size()==0)return 0;
    	
    	
    	//usual case 1~n
    	it=nums.begin();
    	while(it!=nums.end()){
    		//cout<<*it<<endl;
    		if(*it==val){
				//cout<<*it<<endl;
				nums.erase(it);
				it=nums.begin();
			}
			else{
	    		it++;//next element

			}
		}  
		return nums.size();  	
    	

    }
};
//main
int main(void)
{
	Solution aa;
	vector<int> nums;
	int val;
	val=2;
	
	nums.push_back(2);
//	nums.push_back(3);
//	nums.push_back(2);
	
	cout<<aa.removeElement(nums,val)<<endl;
	//cout<<nums.size()<<endl;
	cout<<"---"<<endl;
	for(int idx=0;idx<nums.size();idx++)
	cout<<nums[idx];
	return 0;	
}
