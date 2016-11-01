//DATE:2016/04/20    TIME:21:50:57
//DATE:2016/04/20    TIME:23:03:47
//DATE:2016/04/20    TIME:23:35:16
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    	//special case;
		if(m==0 && n!=0) {
    		nums1=nums2;
    		return ;
		}
		if(m!=0 && n==0){
			return ;
		}
		
		//common case
		int idx,jdx,tmp;
		jdx=0;
		vector<int>::iterator it,jt;
		it=nums1.begin();
		jt=nums2.begin();
		
		int cutoff;
		cutoff=nums1.size()-m;	
		for(idx=0;idx<cutoff;idx++){
//			cout<<"idx:"<<idx<<endl;
			nums1.pop_back();
		}
		
		cutoff=nums2.size()-n;
		for(idx=0;idx<cutoff;idx++)
		nums2.pop_back();
		

		
		for(idx=0;idx<(m+n);idx++){
			
				
			
			if(*it>*jt) {
				it=nums1.insert(it,*jt);
				nums2.erase(jt);
				//jt++;//no need to update jt
				it++;
			}
			else{
				it++;
				
			}
			if(jt==nums2.end())break;
			if(it==nums1.end()){
	//			cout<<"end"<<endl;
				nums1.insert(nums1.end(),jt,nums2.end());
				break;
			}
		}
		
		
		
		return;
        
    }
};
int main(void){
	vector<int> n1;
	vector<int> n2;
	n1.push_back(1);
	n1.push_back(2);
	n1.push_back(3);
	n1.push_back(0);
	n1.push_back(0);
	n1.push_back(0);
//	n1.push_back(1000);
	
	n2.push_back(2);
		n2.push_back(5);
			n2.push_back(6);
//	n2.push_back(4);
//	n2.push_back(1001);


		
	Solution aa;
	aa.merge(n1,3,n2,3);
	cout<<endl<<"---it---"<<endl;
	for(int idx=0;idx<n1.size();idx++)
	cout<<n1[idx]<<",";
	
	cout<<endl<<"---jt---"<<endl;
	for(int idx=0;idx<n2.size();idx++)
	cout<<n2[idx]<<",";
	
	return 0;
}
