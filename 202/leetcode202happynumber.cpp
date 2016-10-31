#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<vector>
#include<math.h>
using namespace std;
class Solution {
public:
	vector<char> getarray(int n){
		vector<char> num;
		int q,r;//quotient,remainder
		q=n;
		while(q!=0){
			r=q%10;
			q=q/10;
			num.push_back(r);
		}
		return num;
	}
    bool isHappy(int n) {
    	vector<char> num;
    	int sum=0;
    	double nn=n;
    	
    	//special case
    	if(n==0)return false;
    	if(n==1)return true;
    	if(log10(nn)==int(log10(nn)))return true;
    	else{
		//usual case
		num=getarray(n);
		for(int idx=0;idx<num.size();idx++){
			sum+=pow(num[idx],2);
		}
		if(sum==89)//special-case, infinite loop
	    return false;
	    else{
	    	return isHappy(sum);
		}
		//cout<<sum<<endl;

		}
    	
    }
};
int main(void)
{
	Solution aa;
	
	cout<<aa.isHappy(4);

#if 0	
	for(int idx=0;idx<num.size();idx++)
	cout<<int(num[idx])<<","; 
#endif    		
	return 0;
}
