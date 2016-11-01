#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<vector>
#include<math.h>
using namespace std;
//DATE:2016/04/29    TIME:03:30:32
//DATE:2016/04/29    TIME:04:14:43
//DATE:2016/04/29    TIME:04:40:53
//DATE:2016/11/01    TIME:22:40:06
class Solution {
public:

    vector<int> countBits(int num) {
    	vector<int> rr(num+1,0); 
    	if(num==0) return rr;
		int preidx=2;
    	for(int idx=1;idx<=num;idx++){
    		if(idx==1)rr[idx]=1;
    		if(idx==2)rr[idx]=1;
    		if((idx-preidx)<preidx)rr[idx]=rr[preidx]+rr[idx-preidx];
    		else if( (idx-preidx)==preidx) {
    			preidx=idx;
    			rr[idx]=1;
			}
		}
    	
		return rr;
    }
};

int main(void){
	Solution aa;
	vector<int> rr;
	rr=aa.countBits(16);
	
	for(int idx=0;idx<rr.size();idx++){
		cout<<rr[idx]<<",";
	}
	return 0;
}
