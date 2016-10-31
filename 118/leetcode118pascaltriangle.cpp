#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;


class Solution {
public:
    vector<vector<int> > generate(int numRows) {
    	vector<int> therow;
        vector<vector<int> > nums;
        //special case
        if(numRows==0) return nums;
        
        //usual case

        for(int idx=0;idx<numRows;idx++){
        	
	        if (idx==0){
	        	therow.push_back(1);
	        	nums.push_back(therow);
	        
			}
			else if(idx==1){
				therow.push_back(1);
				therow.push_back(1);
				nums.push_back(therow);
				
			}        	
        	
        	else{//2~
        		for(int jdx=0;jdx<=idx;jdx++){
        		
        			if(jdx==0 || jdx==idx){
        				therow.push_back(1);
					} 
					else{//jdx=1~idx-1
					#if 1
						int tmp=0;
						tmp=nums[idx-1][jdx-1]+nums[idx-1][jdx];
	//	cout<<(idx-1)<<","<<(jdx-1)<<":"<<nums[idx-1][jdx-1]<<"//"<<(idx-1)<<","<<jdx<<":"<<nums[idx-1][jdx]<<"//tmp:"<<tmp<<endl;
										
						therow.push_back(tmp);

					#endif						
					}
				} 
        		nums.push_back(therow);
        		therow.clear();
			}
        	therow.clear();	
		}
		
		return nums;
    }
};

int main(void)
{
	vector<vector<int> > nums;
	vector<int> therow;
	therow.push_back(1);
	nums.push_back(therow);
	therow.clear();
	
	therow.push_back(2);
	therow.push_back(3);
	nums.push_back(therow);
	therow.clear();
	
	for(int idx=0;idx<nums.size();idx++){
		vector<int> tmp;
		tmp=nums.at(idx);
		//cout<<tmp[0]<<",";
	}
	for(int idx=0;idx<nums.size();idx++){
	//	cout<<nums[0][0]<<endl;
	//	cout<<nums[1][1]<<endl;
	}
	Solution aa;
	nums=aa.generate(5);
	for(int idx=0;idx<nums.size();idx++){
		vector<int> tmp=nums[idx];
		for(int jdx=0;jdx<tmp.size();jdx++){
			cout<<tmp[jdx]<<",";
		}
		cout<<endl;
	}
	return 0;
 } 
