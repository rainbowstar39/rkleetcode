// 引入標準程式庫中相關的字串程式
#include <string>
 
#include <fstream>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
// std 為標準程式庫的名稱空間
using namespace std;
//use double to calculate
double calCnr(int n,int r)
{
	
	//choose when to take 2 steps, when to take 1 steps
	int idx=0;
	double tmpn=1;
	double tmpr=1;

	
	for(idx=1;idx<=r;idx++){
		tmpr*=idx;
		tmpn*=n-(idx-1);
	}
	return tmpn/tmpr;
}
double climbStairs(int n) {
    int len=0;
	int idx=0;
	double all=0;
	len=n/2+n%2;
	if(n<=1)
	return 1;
	
	for(idx=0;idx<=len;idx++){
		
		all+=calCnr(n-2*idx+idx,idx);
	}
	return all;
}

int main(void){

	cout<<climbStairs(35);
	
}
