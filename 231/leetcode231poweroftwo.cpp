// �ޤJ�зǵ{���w���������r��{��
#include <string>
 
#include <fstream>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
// std ���зǵ{���w���W�٪Ŷ�
using namespace std;
//15:38~15:43
//use double to calculate
bool isPowerOfTwo(int n) {
	if(n<=0)return false;
	double val;
	val=log10(n)/log10(2);
	cout<<"check";
	if(val==((int)val)) return true;
	else return false;
	/*
	if(n/2>1)return isPowerOfTwo(n/2);
        else if(n/2==1) return 1;
*/
}
int main(void){

	cout<<isPowerOfTwo(1024);
	
}
