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


class Solution {
public:
    int addDigits(int num) {
      
	  if(num==0) return 0;
	  if(num%9==0) return 9;
	  else return (num%9); 
    }
};
int main(void){
	Solution aa;
	cout << aa.addDigits(99);
	return 0;
	
}
