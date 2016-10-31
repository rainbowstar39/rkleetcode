#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<math.h> 
using namespace std;
class Solution {
public:
    bool isPowerOfThree(int n) {
       	if(n<0 || n==0 ||n==2)return false;
    	if(n==1)return true;
    	if(n>=3) {
    		if(n%3!=0)return false;
    		else{
    			return isPowerOfThree(n/3);
			}
		}
        
    }
};
int main(void)
{
	Solution aa;
	int n;
	n=243;
//	double ff=0;
//	ff=log(24)/log(3);
//	cout<<ff<<endl;
//aa.isPowerOfThree(n);
	cout<<aa.isPowerOfThree(n);
} 
