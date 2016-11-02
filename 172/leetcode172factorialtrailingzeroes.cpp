#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<vector>
#include<string.h> 
#include<math.h>
using namespace std;
//DATE:2016/05/04    TIME:22:13:36
//DATE:2016/05/04    TIME:22:54:47 time limited
//DATE:2016/05/04    TIME:23:20:58 check discuss
//accepted..but not my idea
class Solution {
public:

    int trailingZeroes(int n) {
        
        if(n==0) return 0;
	
		int cnt=0;
		unsigned long idx;
        
        // 5^idx affects the 0
        for (idx=5;idx<=n;idx*=5){
			cnt+=(n/idx);				   

		}
		

		
		return cnt;
    }
};
int main(void){
	
	Solution aa;
	int n=30;

	//cout<<fac<<endl;
	cout<<"---------"<<endl;
//	cout<<aa.getcnt5(10000)<<endl;
	cout<<aa.trailingZeroes(n);
	return 0;
}
