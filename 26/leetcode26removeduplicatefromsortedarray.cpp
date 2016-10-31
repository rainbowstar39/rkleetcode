#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string.h> 
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    	if(nums.size()==0)return 0;
        if(nums.size()==1)return 1;
        if(nums.front()==nums.back())return 1;
        if(nums.front()==nums.back()-1){
			int tmp=nums.back();
			nums.erase(nums.begin()+1,nums.end());
			nums.push_back(tmp);
        	return 2;
		}
        vector<int>::iterator it,jt;
        it=nums.begin();
        jt=it+1;
        //cout<<*(it+1);
        		 	
		 while(it!=nums.end()){
		 	jt=it+1;
			while(jt!=nums.end()){
			if(*jt==*it){
				nums.erase(jt);
				jt=it+1; 
			}
			else	break;
			//cout<<*jt<<","<<endl;
				
			}
		 	it++;
		 }
		 
		 return nums.size();
    }
};
int main(void){

	vector<int> nums;	
	char str[]="1,1,2,2";
	char *pch;
	pch=strtok(str,",");
	nums.push_back(atoi(pch));
	while(pch!=NULL){ 
	pch=strtok(NULL,",");
	//cout<<pch<<endl;
	nums.push_back(atoi(pch));
	} 
	
	nums.pop_back();// 0 at the end is no need
	//for(int idx=0;idx<nums.size();idx++)
	//cout<<nums[idx]<<",";	
	
	Solution aa;
	cout<<aa.removeDuplicates(nums);
	cout<<endl<<"------------------"<<endl;
	for(int idx=0;idx<nums.size();idx++)
	cout<<nums[idx]<<",";	
	
}
