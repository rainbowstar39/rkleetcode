#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<fstream>
#include<vector>
#include<math.h>
using namespace std;
//DATE:2016/04/26    TIME:02:10:19
class Solution {
public:
    bool isPowerOfFour(int num) {
        double result;
        result=log2(num);
        if(result!=int(result)) return false;
        
        if(int(result)%2==0) return true;
        else return false;
    }
};
int main(void){
	Solution aa;
	cout<<aa.isPowerOfFour(2);
	return 0;
}
