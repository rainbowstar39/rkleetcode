#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
class Solution {
	int getinter(int A, int B, int C, int D, int E, int F, int G, int H){
		unsigned int rr=0;
		if(F>=D || B>=H || G<=A ||C<=E) //no intersection
		{  
		   return rr;
		}  		
		int aa,bb,cc,dd;
		unsigned int w1,h1;
		vector<int> xx,yy;
		xx.push_back(A);
		xx.push_back(C);
		xx.push_back(E);
		xx.push_back(G);
		//yy.inset(yy.begin(),B,D,F,H);
		yy.push_back(B);
		yy.push_back(D);
		yy.push_back(F);
		yy.push_back(H);
		
		sort(xx.begin(),xx.end());
		sort(yy.begin(),yy.end());
		aa=xx[1];
		cc=xx[2];
		bb=yy[1];
		dd=yy[2];
		w1=cc-aa;
		h1=dd-bb;
		rr=w1*h1;
		return rr;
	}
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        
        unsigned int rr=0;
        unsigned int w1,w2;
        unsigned int h1,h2;
        w1=C-A; h1=D-B;
        w2=G-E; h2=H-F;
		int inter=0;        
		
		inter=getinter(A,B,C,D,E,F,G,H);
		rr=w1*h1+w2*h2-inter;
		return rr;
    }
};
int main(void){
	Solution aa;
	cout<<aa.computeArea(0,0,4,4,5,5,6,6);
	return 0;
}
