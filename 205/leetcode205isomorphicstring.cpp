#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<fstream>
#include<math.h>
using namespace std;
//DATE:2016/05/03    TIME:22:43:27
//DATE:2016/05/03    TIME:23:57:51 working
class Solution {
public:

	int getarridx(char c1){
		return c1;
	}
    bool isIsomorphic(string s, string t) {
    	vector<char> lst,lst2;
 
 
    	if(s.empty() && t.empty()) return true;
    	if(s.empty() || t.empty()) return false;
    	if(s.size()!=t.size()) return false;
		lst.insert(lst.begin(),128,0);
		lst2.insert(lst2.begin(),128,0);
		int lidx=0;
		int lidx2=0;

  		for(int idx=0;idx<s.size();idx++){
  				lidx=getarridx(s[idx]);//get the idx of array
  				lidx2=getarridx(t[idx]);
   				if(lst[lidx]==0){
					lst[lidx]=t[idx];
				}
				  				
				if(lst2[lidx2]==0){
					lst2[lidx2]=s[idx];
				}  
				 				
  				if(lst[lidx]!=t[idx])
  				return false;
  				if(lst2[lidx2]!=s[idx])
  				return false;
  				



				
		}  	
		return true;
		
    	
        
    }
};

int main(void){
	Solution aa;
//	cout<<aa.getdiff('A','a');
//	cout<<aa.getarridx('a');
	cout<<aa.isIsomorphic("aA","aa")<<endl;
	cout<<aa.isIsomorphic("egg","add")<<endl;
	cout<<aa.isIsomorphic("foo","bar")<<endl;
	cout<<aa.isIsomorphic("paper","title")<<endl;
	return 0;
}
