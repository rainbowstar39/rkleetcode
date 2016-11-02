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
    	
    	vector<int> p11,p12,p21,p22,p31,p32;
    	//p11:(	//p12:)
    	//p21:[ //p22:]
    	//p31:{ //p32:}
    
    	
    	for(int idx=0;idx<s.size();idx++){
    		
			switch(s[idx]){
				
				case '(':
					p11.push_back(idx);
					break;
				case ')':

					if(p11.size()) {
						if(p21.size()>0 && p21.back()>p11.back())  return false;
						else if( p31.size()>0 && p31.back() >p11.back()) return false;						
						else 						
						 p11.pop_back();  						
					}
					else p12.push_back(idx);
					break;
				case '[':
					p21.push_back(idx);
					break;
				case ']':

					if(p21.size()) {
						if(p11.size()>0 && p11.back()>p21.back() ) return false;
						else if(p31.size()>0 && p31.back() >p21.back()) return false;
						else p21.pop_back();
					}
					else
					p22.push_back(idx);
					break;
				case '{':
					
					p31.push_back(idx);					
					break;
				case '}':
					
					if(p31.size()) {
						if(p21.size() >0 && p21.back()>p31.back() ) return false;
						else if(p11.size()>0 && p11.back() >p31.back()) return false;
						else	p31.pop_back();					
					}		
					else p32.push_back(idx);					
					break;
				default: break;
			}
			
			
		}
		
		if(!p11.empty() || !p12.empty() || !p21.empty() || !p22.empty() || !p31.empty() || !p32.empty())
			return false;
		return true;
		
		
        
    }
};
int main(void){
	Solution aa;
	cout<<aa.isValid("(]");
	return 0;
}
