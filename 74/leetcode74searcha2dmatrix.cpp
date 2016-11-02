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
        int left,right,middle;
        int lleft,rright,mmiddle;
        
        
        left=0;
        right=matrix.size()-1;
        lleft=0;
        
        rright=matrix[0].size()-1;
//        cout<<"**rright:"<<rright<<endl;
        
        while(left<=right){
        	middle=(left+right)>>1; // div2
			if(target<matrix[middle][0]) right=middle;
        	else if(target>matrix[middle][rright])left=middle;
        	
        //	cout<<"left:"<<left<<"right:"<<right<<"middle:"<<middle<<endl;
			if(left==right){
				if(target<matrix[left][0] || target > matrix[right][rright])  return false;
				else {
					int idx=left;
					while(lleft<=rright){
						mmiddle=(lleft+rright)>>1;//div2
						if(target<matrix[idx][mmiddle]) rright=mmiddle;
						else if(target > matrix[idx][mmiddle]) lleft=mmiddle;
						else if(target==matrix[idx][mmiddle] ) return true;
						
					//	cout<<"lleft:"<<lleft<<"rright:"<<rright<<endl;
						if(lleft==rright){
							if (target==matrix[idx][lleft]) return true;
							else return false;
						}
						
					}
				}
			}
		
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
