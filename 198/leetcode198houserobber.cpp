#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<vector>
#include<string>
#include<string.h>
#include<math.h>
#include<algorithm> 
using namespace std;
//DATE:2016/05/04    TIME:13:48:02
//DATE:2016/05/04    TIME:14:00:40 wrong answer
//DATE:2016/05/04    TIME:14:39:09 rewrite

//****DATE:2016/05/04    TIME:15:12:01wrong answer
//****wrong answer
struct listnode{
	int idx;
	int val;
};
bool comp(listnode node1,listnode node2){
	return node1.val<node2.val?1:0;
}
class Solution {
public:
    int rob(vector<int>& nums) {
      	
      	if(nums.size()==0) return 0;
      	if(nums.size()==1) return nums[0];
		vector<listnode> lst;
		vector<char> visited;
		listnode node1;
		int idx=0;
		int sum=0;
		int sum2=0;
		visited.insert(visited.begin(),nums.size(),0);
		
	//	printf("%s %d\n",__FUNCTION__,__LINE__); 
		//0: unknown, 1:visited / -1:can't be visited
		for(idx=0;idx<nums.size();idx++){
			node1.val=nums[idx];
			node1.idx=idx;
			lst.push_back(node1);
		}
   		sort(lst.begin(),lst.end(),comp);
		#if 0
		for(idx=0;idx<lst.size();idx++){
			cout<<lst[idx].idx<<","<<lst[idx].val<<endl;
		}
		cout<<"-----------------------"<<endl;
		#endif
		
   		int tmpidx;
   		for(idx=lst.size()-1;idx>=0;idx--){
   			tmpidx=lst[idx].idx;
   	//		cout<<tmpidx<<",";
   			if(visited[tmpidx]==0){
   				visited[tmpidx]=1;
   				sum+=lst[idx].val;
	   			if(tmpidx==0){
	   				//special case
	   				visited[tmpidx+1]=-1;
				}
				else if(tmpidx==nums.size()-1){
					//special case
					visited[tmpidx-1]=-1;
				}
				else {
	   				visited[tmpidx+1]=-1;
	   				visited[tmpidx-1]=-1;
					
				}	

			}
		}
		
		for(idx=0;idx<visited.size();idx++){
			if(visited[idx]==-1)
			sum2+=nums[idx];
		}
		
		if(sum2>sum)
	 	return sum2;
	 	
		return sum;
    }
};
int main(void){
	
	Solution aa;
	vector<int> lst;
	char str[]="1,7,9,4";
	char *pch;
	pch=strtok(str,",");
	lst.push_back(atoi(pch));
	while(pch!=NULL){
		pch=strtok(NULL,",");
		lst.push_back(atoi(pch));

	}
	lst.pop_back();
	for(int idx=0;idx<lst.size();idx++){
		cout<<lst[idx]<<endl;
	}
	cout<<"-----------------------"<<endl;
	cout<<aa.rob(lst);
	return 0;
} 
