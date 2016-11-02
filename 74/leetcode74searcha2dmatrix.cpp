#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
//DATE:2016/05/16    TIME:21:15:24
class Solution {
public:
    bool searchMatrix(vector<vector<int> >& matrix, int target) {
  	     int rowsize=matrix.size();
  	     int colsize=matrix[0].size();
  	     int row=0;
  	     int col=colsize-1;
  	     while(1){
  	    
		  if(target>matrix[row][col]){
		  	row++;
		  } 
		  else if(target<matrix[row][col]){
		  	col--;
		  }	
		  else {
		  	return true;
		  }
		  
		  if(row==rowsize || col<0 ) break;
		}
 		return false;
  	     
    }
};

int main(void){
	vector< vector<int> > mm;	
	vector<int>  aa;
	aa.push_back(1);
	aa.push_back(3);
	aa.push_back(5);
	aa.push_back(7);

	mm.push_back(aa);
	#if 1
	aa.clear();
	aa.push_back(10);
	aa.push_back(11);
	aa.push_back(16);
	aa.push_back(20);
	mm.push_back(aa);
	#endif

	#if 1
	aa.clear();
	aa.push_back(23);
	aa.push_back(30);
	aa.push_back(34);
	aa.push_back(50);
	mm.push_back(aa);
	#endif	
	Solution cc;
	cout<<"mm.size:"<<mm.size()<<endl;
    cout<<cc.searchMatrix(mm,13);
	return 0;
}
