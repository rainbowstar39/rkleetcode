#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
		if(s.size()==0)return 0;
		int length=0;


		for(int idx=s.size()-1;idx>=0;idx--){
			if(s[idx]!=' '){
				length++;
			}
			else{
				if(length>0) return length;
				
			}
		}
		return length;
    }
};
int main(void){
	string s="abb cd  ";
	Solution aa;
	cout<<aa.lengthOfLastWord(s);
	return 0;
}
 
