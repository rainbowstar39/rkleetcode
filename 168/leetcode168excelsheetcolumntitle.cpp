#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
#include<vector>
#include<sstream>
using namespace std;
//DATE:2016/05/09    TIME:02:49:21
//DATE:2016/05/09    TIME:03:13:57
class Solution {
	char getchar(int n){
		if (n==0) return 'Z';
		
		return 'A'+(n-1);
	}
public:
    string convertToTitle(int n) {
        stringstream ss;
        string rr,tmp;
		//special case
        if(n==0) return rr;
        
        int val;
        while(n!=0){
        	val=n%26;

        	ss<<getchar(val);
			
			if(val==0)
			n-=26;
			
	       	n=n/26;			
		}
        tmp=ss.str();
        for(int idx=tmp.size()-1;idx>=0;idx--){
        	rr.push_back(tmp[idx]);
		}
        return rr;
    }
};
int main(void){
	Solution aa;
	cout<<aa.convertToTitle(27);
	return 0;
}
