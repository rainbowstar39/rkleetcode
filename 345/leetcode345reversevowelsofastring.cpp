//DATE:2016/05/03    TIME:21:49:06
//DATE:2016/05/03    TIME:22:42:32
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<string.h>
#include<vector>
#include<fstream>
using namespace std;
class Solution {
public:
	bool checkvowel(char cc){
		if(cc=='a' || cc=='i'|| cc=='u' || cc=='e' || cc=='o'||
				   cc=='A' || cc=='I'|| cc=='U' || cc=='E' || cc=='O')
				   return true;
	   
	    return false;
	}
    string reverseVowels(string s) {
  			//aiueo
			 string s2;
			 int jdx=s.size()-1;
			 
			 for(int idx=0;idx<s.size();){
			 	if(idx>=jdx) break;
			 	if(checkvowel(s[idx])&& checkvowel(s[jdx])){
				   	
						s2[0]=s[idx];
						s[idx]=s[jdx];
						s[jdx]=s2[0];
						//printf("%s %d idx:%d,jdx:%d\n",__FUNCTION__,__LINE__,idx,jdx);
						//cout<<s<<endl;
						jdx--;
						idx++;

			   }
			   else if (checkvowel(s[idx])){
			   		jdx--;
			   }
				else if(checkvowel(s[jdx]))	{
					idx++;
				}
				else {
					idx++;
					jdx--;
				}		 

			}
			 return s;
			       
    }
};

int main(void){
	string s="aA";
	Solution aa;
	cout<<aa.reverseVowels(s);
	
	return 0;
}
