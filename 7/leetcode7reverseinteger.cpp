#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<string.h>
#include<vector>
#include<limits.h>
//DATE:2016/04/21    TIME:19:34:19 
//DATE:2016/04/21    TIME:19:44:05 wrong
//DATE:2016/04/21    TIME:19:48:28
//DATE:2016/04/21    TIME:19:54:48
using namespace std;
class Solution {
public:
    int reverse(int x) {
	     
		 //special case
		 if(x==0)return x;
			
		 long rdigits;		 
		 long div;
		 char negflag=0;
		 //check if negative
		 if(x<0) {
			 negflag=1;
			 div=x*(-1);
		 }
		else{
			div=x;
		}	 
		
		rdigits=0;
		while(div!=0){
			
			rdigits=rdigits*10+div%10;
			div=div/10;	
		} 
		
		if(negflag==1)rdigits*=(-1);
		if(rdigits>2147483647 || rdigits<-2147483648) return 0;		
		cout<<INT_MIN;
//		cout<<rdigits<<endl;
		return rdigits;
//	for(int idx=0;idx<rdigits.size();idx++)
//	cout<<"rdigits:"<<rdigits[idx]<<",";	 
    }
};
int main(void){

	Solution aa;
	aa.reverse(-123);
	return 0;
}
