#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string>//string str
#include<math.h>
using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        vector<char> str2;
		int idx=0;
		int negflag=0;
		double result=0;
		//special case :empty string
		if(str.size()==0)return 0;
		 
		int digitflag=0;
		//
        for(idx=0;idx<str.size();idx++){//delete white space 
        	if(str[idx]!=' '){
        		digitflag=1;
        		str2.push_back(str[idx]);
        		//cout<<str2[idx]<<endl;
			}else if (str[idx]==' ' && digitflag==1 ){
				break;
			}

		}
		
		//only + or -
		if(str2.size()==1 && (str2.front()=='+' || str2.front()=='-')) return 0;
		
		//check negative
		if(str2.front()=='-')
		negflag=1;
		
		
		//calculate
		for(idx=0;idx<str2.size();idx++){
			if(idx!=0 && (str2[idx]<48 || str2[idx]>57)) {
				
				break;
			}
			if(idx==0 && (str2.front()=='+' || str2.front()=='-'))continue;		
			else if(idx==0 && (str2.front()<48 || str2.front()>57))	return 0;
			
			result+=(str2[idx]-48)*pow(10,(str2.size()-1-idx));
		}
		
		result=result/pow(10,str2.size()-idx);//remove the zeroes
		if(negflag==1)result*=(-1);
		
		//check range: INT_MAX (2147483647) or INT_MIN (-2147483648) is returned.
		if(result>2147483647) return 2147483647;
		if(result<-2147483648) return -2147483648;

		return result;
    }
};
int main(void)
{
	
	Solution aa;
	string str="abc";
cout<<	aa.myAtoi(str); 

} 
