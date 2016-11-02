#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<vector>
#include<string>
#include<string.h>
#include<math.h>
#include<algorithm> 
using namespace std;
//DATE:2016/05/04    TIME:13:48:02
//DATE:2016/05/04    TIME:14:00:40 wrong answer
//DATE:2016/05/04    TIME:14:39:09 rewrite

//DATE:2016/05/04    TIME:15:12:01wrong answer
//**************accepted  version**********
class Solution {
public:
    int rob(vector<int>& nums){
    	int sum1=0,sum2=0;
    	for(int idx=0;idx<nums.size();idx++){
    		if(idx%2){
    			sum1=max(sum1+nums[idx],sum2);
			}
			else{
				sum2=max(sum2+nums[idx],sum1);
			}
		}
		return max(sum1,sum2);
	}
};
int main(void){
	
	Solution aa;
	vector<int> lst;
	char str[]="8,2,8,9,2";
	char *pch;
	pch=strtok(str,",");
	lst.push_back(atoi(pch));
	while(pch!=NULL){
		pch=strtok(NULL,",");
		lst.push_back(atoi(pch));

	}
	lst.pop_back();
	for(int idx=0;idx<lst.size();idx++){
		cout<<lst[idx]<<endl;
	}
	cout<<"-----------------------"<<endl;
	cout<<aa.rob(lst);
	return 0;
} 
