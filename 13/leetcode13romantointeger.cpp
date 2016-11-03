#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
class Solution {
public:
  	int getint(char c){
		int num=0;
  		switch( c){
  		case 'I': num=1;
		  break;
		case 'V':num=5;
		  break;
		case 'X': num=10;
		  break;
		  
		case 'L': num=50;
		  break;

		case 'C': num=100;
		  break;

		case 'D': num=500;
		  break;

		case 'M': num=1000;
		  break;

		default: break; 
		  }	
		  
		 return num; 
	}
    int romanToInt(string s) {
        if(s.empty()) return 0;
		int num=0;
        int cur=0; 
		int next=0;
		for (int i=0;i< s.size();){
			cur= getint(s[i]);
			next=getint(s[i+1]);
			if(cur<next){
				num+=(next-cur);
				i+=2;
			}
			else{
				num+=cur;
				i++;				
			}     	
		}
		return num;        
    }
};
int main(void){
	string s;
	Solution aa;
	s="LXXXIX";
	cout<<aa.romanToInt(s);
	return 0;
}
