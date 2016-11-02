#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<sstream>
#include<string>
using namespace std;
//DATE:2016/05/12    TIME:22:23:53
#define MIN(x, y) (x<y? x:y)
class Solution {
public:
    string getHint(string secret, string guess) {
 		int len=secret.size();
 		vector<unsigned int> checked(10,0),ss(10,0),gg(10,0);
 		
 		int A=0,B=0;
 		char sval,gval;
	   for(int idx=0;idx<len;idx++){
	   	sval=secret[idx]-'0';
		gval=guess[idx]-'0'; 
		if(secret[idx]==guess[idx]) {
	   	 	A++;
	   	    
	   	    checked[sval]++;
		}
		ss[sval]++;
		gg[gval]++;
	   }
	   
	   
	   for(int idx=0;idx<len;idx++){
	   	  B+=(MIN(ss[idx],gg[idx])-checked[idx]);
	   }
	   
	   stringstream st;
	   st<<A<<"A"<<B<<"B";
	   return st.str();
    }
};
int main(void){
	Solution aa;
	string secret="10";
	string guess="11";
	cout<<aa.getHint(secret,guess);
	return 0;
}
