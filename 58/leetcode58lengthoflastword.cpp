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
		vector<char> str;
		int length=0;
		for(int idx=0;idx<s.size();idx++){
			if(s[idx]!=' '){
				str.push_back(s[idx])	;			
			}
			else{
				if(str.size()>0){
					length=str.size();
					str.clear();
				}				
			}
		}
		if(str.size()>0){
			length=str.size();
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
 
