#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int> >& matrix, int target) {
          //special case
		  if (matrix.empty()) return false;
		  int row=matrix.size();
		  int rowend=row-1;
		  int col=matrix[0].size();
		  int colend=col-1;
		  
		  int i,j,k;
		  int ii,jj,kk;
		  i=0;j=row-1;
		  ii=0;jj=col-1;
		  while(i<=j){
			  k=(i+j)>>1;// div 2
			  if(target<matrix[k][0]) j=k-1;
			  else if(target>matrix[k][colend]) i=k+1;
			  else {
			  	while( ii<=jj){
			  		kk=(ii+jj)>>1;//div 2
					if(target<matrix[k][kk])jj=kk-1;
					else if (target > matrix[k][kk])	ii=kk+1;
					else {
						return true;
					}
					
					if(ii==jj){
						if(target==matrix[k][ii]) return true;
						else return false;
					} 
					
				}
			  	return false;
			  }
			  
			  	if(i==j){
					if(target<matrix[i][0] || target >matrix[i][colend]) return false;
					
				}			  	
			  }
			  
		
		  
		  
		  return false;
    }
};
int main(void){
	
	vector<int>  aa;
	aa.push_back(1);
	aa.push_back(3);
	aa.push_back(5);
	aa.push_back(7);
	vector< vector<int> > mm;
	mm.push_back(aa);
	#if 1
	aa.clear();
	aa.push_back(10);
	aa.push_back(11);
	aa.push_back(16);
	aa.push_back(20);
	mm.push_back(aa);
	#endif
	mm.push_back(aa);
	#if 1
	aa.clear();
	aa.push_back(23);
	aa.push_back(30);
	aa.push_back(34);
	aa.push_back(50);
	mm.push_back(aa);
	#endif	
	Solution cc;
    cout<<cc.searchMatrix(mm,13);
	return 0;
}
