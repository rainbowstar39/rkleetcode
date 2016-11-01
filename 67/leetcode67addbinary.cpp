#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
#include<vector>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
  		int len;
		len=max(a.size(),b.size() );   
		int idx,jdx,cnt;

		int aa,bb;
		bool carry=false,sum=false;
		string result;
			
		cnt=max(a.size(),b.size());	
	//	cout<<"a:"<<a<<endl;
	//	cout<<"b:"<<b<<endl;
		for(idx=a.size()-1,jdx=b.size()-1;cnt>0;idx--,jdx--,cnt--){
		//	cout<<"a[idx]:"<<a[idx]<<"b[idx]:"<<b[idx]<<"//(a[idx] & b[idx]):"<<(a[idx] & b[idx])<<endl;
			if(idx<0)
				aa=0;
			else
				aa=a[idx]-48;
				
			if(jdx<0)	
				bb=0;
			else
				bb=b[jdx]-48;
			
		//	cout<<endl<<"aa:"<<aa<<"bb:"<<bb<<endl;
			sum=(carry ^ aa ^ bb);
			
			if(sum==1)result.insert(result.begin(),'1');
			else result.insert(result.begin(),'0');
			
	
			if(carry==1){
				carry=(aa | bb);
			}
			else{
				carry=(aa & bb);
			}
		}
		
		if(carry==1)result.insert(result.begin(),'1');
		//else result.insert(result.begin(),'0');
		
		return result;
    }
};
int main(void){
	string a1="11";
	string b1="1";
	Solution aa;
	cout<<aa.addBinary(a1,b1);
	cout<<endl;
#if 1
	a1="1010";
	b1="1011";
	cout<<aa.addBinary(a1,b1);
	cout<<endl;
	a1="11";
	b1="1";
	cout<<aa.addBinary(a1,b1);
cout<<endl;
	a1="1";
	b1="1";
	cout<<aa.addBinary(a1,b1);
cout<<endl;
	a1="10";
	b1="1";
	cout<<aa.addBinary(a1,b1);		
cout<<endl;
	a1="10";
	b1="11";
	cout<<aa.addBinary(a1,b1);
cout<<endl;		
#endif		
	return 0;
}
