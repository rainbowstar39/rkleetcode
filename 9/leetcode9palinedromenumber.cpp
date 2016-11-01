#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
//DATE:2016/04/30    TIME:00:36:14
//DATE:2016/04/30    TIME:00:53:15 use extra space?
class Solution {
public:
    bool isPalindrome(int x) {
		//special case
  		if(x<0) return false;
		if(x<10) return true;
		
		long y=0;//should take care of reversing integer, need to avoid overflow
		int tmpx=x;
		while(x!=0){
			y+=x%10;
			x/=10;
			if(x!=0) y*=10;
		}
	//	cout<<"tmpx:"<<tmpx<<"y:"<<y<<endl;
		if(tmpx==y) return true;
		

		return false;      
    }
};
int main(void){
	Solution aa;
	cout<<aa.isPalindrome(22);
	return 0;
}
