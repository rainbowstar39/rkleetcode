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
//15:38~15:43
//use double to calculate
bool isPowerOfTwo(int n) {
	if(n<0)return 0;
	    if(n==0) return 0;
		if(n==1) return 1;
        else if(n%2==1)return 0;
        if(n/2>1)return isPowerOfTwo(n/2);
        else if(n/2==1) return 1;
}
int main(void){

	cout<<isPowerOfTwo(512);
	
}
