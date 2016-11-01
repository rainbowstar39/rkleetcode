#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
//DATE:2016/04/26    TIME:01:50:24
//DATE:2016/04/26    TIME:01:55:55
class Solution {
public:
    string reverseString(string s) {
        string r;
        if(s.empty())return s;
        for(int idx=0;idx<s.size();idx++){
        	r.push_back(s[s.size()-1-idx]);
		}
		return r;
    }
};
int main(void){
	string test="hello";
	Solution aa;
	cout<<aa.reverseString(test);
	return 0;
}
