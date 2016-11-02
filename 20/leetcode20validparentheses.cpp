#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
    	
    	vector<char> ss;
    	for(int idx=0;idx<s.size();idx++){
    		switch(s[idx])
    		{
				case '(':
					ss.push_back(s[idx]);
					break;
			    case '[':
			    	ss.push_back(s[idx]);			    	
			    	break;
			    case '{':
			    	ss.push_back(s[idx]);			    	
			    	break;
			    case ')':
			    	if(ss.empty()) return false;
			    	if(ss.back()!='(') return false;
			    	ss.pop_back();			    	
			    	break;
			    case ']':
			    	if(ss.empty()) return false;
			    	if(ss.back()!='[') return false;
			    	ss.pop_back();
			    	break;
			    case '}':
			    	if(ss.empty()) return false;
			    	if(ss.back()!='{') return false;
			    	ss.pop_back();
					break;
			    default:break;
			}
			 
		}
		
		if(!ss.empty())
		return false;
		
				
		return true;
		
		
        
    }
};
int main(void){
	Solution aa;
	cout<<aa.isValid(")");
	return 0;
}
