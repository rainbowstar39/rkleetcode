#include<stdio.h>
#include<iostream>
#include<fstream>
#include<vector>
#include<stdlib.h>
#include<string.h>
using namespace std;
//DATE:2016/04/20    TIME:20:33:25

class Solution {
public:
    vector<int> getRow(int rowIndex) {

    	
    	int k=0;
    	k=rowIndex;
    	
    	vector<int> pre;
		vector<int> result;
		
		if(k==0){
			result.push_back(1);
			return result;
		}
		if(k==1){
			result.push_back(1);
			result.push_back(1);
			return result;
		}

		pre.push_back(1);
		pre.push_back(1);
		
		for(int idx=2;idx<=k;idx++){
			result.clear();
			result.push_back(1);
			//cout<<pre.size();
			for(int jdx=0;jdx<pre.size()-1;jdx++){
			//	cout<<jdx<<endl;
				result.push_back(pre[jdx]+pre[jdx+1]);
			}
			result.push_back(1);
			
			pre=result;
		

		}
		
		return result;
		
    }
};
int main(void){
	
	Solution aa;
	vector<int> result;
	result=aa.getRow(2);
	for(int idx=0;idx<result.size();idx++){
		cout<<result[idx]<<",";
	}
	return 0;
}
