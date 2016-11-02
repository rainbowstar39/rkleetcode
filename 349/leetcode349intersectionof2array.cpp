//350. Intersection of Two Arrays II
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
 
        vector<int> rr;
		sort(nums1.begin(),nums1.end());
		sort(nums2.begin(),nums2.end());
	
		
		int jdx=0;
		int idx=0;
		for(idx=0;idx<nums1.size();){
		  if(jdx>=nums2.size())break;
		  
		  if(nums1[idx]==nums2[jdx]){
		      
		    if(rr.empty())  
		    rr.push_back(nums1[idx]);
		  	else if(nums1[idx]!=rr.back())
		  	rr.push_back(nums1[idx]);

		  	idx++;
		  	jdx++;
		  }	
		  else if(nums1[idx]<nums2[jdx]){
		  	idx++;
		  } 
		  else if(nums1[idx]>nums2[jdx]){
		  	jdx++;
		  }
		}        
        return rr;        
    }
};
using namespace std;
int main(void){
	return 0;
}
