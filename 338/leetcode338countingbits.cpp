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
class Solution {
public:
	int getcntbit(int i){
		int cnt=0;
		
		for(int idx=i;idx>=1;idx/=2){
			if(idx%2==1) cnt++;
		}
		return cnt;		
	}
    vector<int> countBits(int num) {
    	vector<int> rr; 
    	rr.push_back(0);
    	double x;
    	int preidx=1;
    	if(num==0) return rr; 
    	rr.push_back(1);
  		for(int idx=2;idx<=num;idx++){
  			
			if (idx>>1==preidx && idx%preidx==0){
  			//	printf("\n%s %d %d\n",__FUNCTION__,__LINE__,idx);
  				rr.push_back(1);
  				preidx=idx;
  				
			}
			else{
				int tmp;
				tmp=rr[preidx]+rr[idx-preidx];
				rr.push_back(tmp);
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
