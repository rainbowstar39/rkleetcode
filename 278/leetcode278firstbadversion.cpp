#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
#include<vector>
#include<sstream>
using namespace std;
// Forward declaration of isBadVersion API.
bool isBadVersion(int version){
	int n=1702766719;
	if(version>=n) return true;
	else return false;
}

class Solution {
public:
    int firstBadVersion(int n) {
  		unsigned int i,j,k;
		  i=0;j=n;
		 while(i<j){
			k=(i+j)>>1;
			//cout<<i<<","<<j<<","<<k<<endl;
		 	if(isBadVersion(k)){
		 		j=k;
		 		if(  (j==(i+1))  )    break;
			 }
			 else{
			 	i=k;
			 	if(  (j==(i+1))  ) break;
			 }
			 
		 }     
		 
		 return j;
    }
};
int main(void){
	Solution aa;
	cout<<aa.firstBadVersion(2126753390);
	return 0;
}
