#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
//DATE:2016/04/26    TIME:02:02:28
//DATE:2016/04/26    TIME:02:08:21
class Solution {
public:
	int getindex(char a){
		return (a-'a');	
	}
	
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        int ss[26]={0},tt[26]={0};
        for(int idx=0;idx<s.size();idx++){
        	ss[getindex(s[idx])]++;
        	tt[getindex(t[idx])]++;
		}
		for(int idx=0;idx<26;idx++){
			if(ss[idx]!=tt[idx]) return false;
		}
		return true;
    }
};
int main(void){
	Solution aa;
	cout<<aa.isAnagram("anagram","nagaram");
	return 0;
}
