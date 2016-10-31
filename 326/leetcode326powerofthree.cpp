#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<math.h> 
using namespace std;
class Solution {
public:
    bool isPowerOfThree(int n) {
    	double dr;
		//special case
    	if(n<0 || n==0) return false;
    	if(n==1) return true;

		//usual case    	
    	dr=log10(n)/log10(3);
    	
    	//dr=3.14156788;
    	//cout.precision(17);
    	//cout<<fixed<<"dr:"<<dr<<endl;
	//	cout<<"int(dr):"<<int(dr)<<endl;
    	if(dr!=int(dr)) return false;
    	else return true;
        
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
