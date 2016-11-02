#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
#include<vector>
#include<sstream>
using namespace std;
class Solution {
public:
	string getnewstr(string ss){
		string rr;
		stringstream sst;
		
		int cnt=1;
		char cc;
		//cout<<ss.size()<<endl;
		//cout<<"###"<<ss<<endl;
		
	//	return rr;
		if(ss.empty()) return rr;
		
		for(int idx=0;idx<ss.size();idx++){
			//cout<<idx<<"***"<<ss[idx]<<"..........."<<ss.size()<<endl;
			cc=ss[idx];
			if(ss[idx]!=ss[idx+1]){
				sst<<cnt<<cc;
				cnt=1;//reset
			}
			else {
				cnt++;
			}
			
		}
		rr=sst.str();
		return rr;
	}
    string countAndSay(int n) {
        string str;
        string tmp;
        
        if(n==0) return str;
        str="1";
        if(n==1) return str;
        //cout<<str.size();
        for(int idx=2;idx<=n;idx++){
        	str=getnewstr(str);
			
		}
        return str;
    }
};
int main(void){
	Solution aa;
	cout<<aa.countAndSay(100000);
	return 0;
}
