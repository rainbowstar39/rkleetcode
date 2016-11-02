#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<sstream>
using namespace std;
//DATE:2016/05/12    TIME:20:26:46
//DATE:2016/05/12    TIME:22:08:18
class Solution {
public:
	string getstr2(int num){
		string str;
		switch(num){
			case 1: str="I";
				break;
			case 4: str="IV";
				break;
			case 5: str="V";
				break;
			case 6: str="VI";
				break;
			case 9: str="IX";
				break;
			case 10: str="X";
				break;
			case 40:str="XL";
				break;
			case 50: str="L";
				break;
			case 60: str="LX";
				break;
			case 90: str="XC";
				break;
			case 100: str="C";
				break;
			case 400: str="CD";
				break;
			case 500: str="D";
				break;
			case 600: str="DC";
				break;
			case 900: str="CM";
				break;
			case 1000: str="M";
		 		break;
			default: break;
		}
		
		return str;
	}

    string intToRoman(int num) {
		string s;
		stringstream tmpstream;
		
		if(num==0) return s;
		int remain=0;
		int base=10;
		while(num>0){
			remain=num%base;
		//	cout<<base<<","<<remain<<endl;
			int tmp;
			if(remain==9*(base/10)){
				//9
				//90
				//900
				
				tmp=9*base/10;
			//	printf("tmp :%d %s %d\n",tmp,__FUNCTION__,__LINE__);
				tmpstream<<getstr2(tmp);
				
			}
			else if(remain>=base/2){
				//5~8
				//50~80
				//500~800
				tmp=base/2;
				tmpstream<<getstr2(base/2);
				
			}
			
			else if(remain==4*(base/10)){
				tmp=4*(base/10);
				tmpstream<<getstr2(tmp);
				
			}
			else {
				//tmpstream<<getstr2(remain*base/10);
				tmp=0;
			}
		
			tmp=remain-tmp;
			while(tmp>0){
			//	cout<<"tmp:"<<tmp<<endl;
				tmpstream<<getstr2(base/10);
				tmp-=(base/10); 
			}
			
			s.insert(0,tmpstream.str());
			tmpstream.str("");
			tmpstream.clear();
			num-=remain;
			base*=10;
		}
		
		return s;
		        
    }
};
int main(void){
	string s;
	Solution aa;
	cout<<aa.intToRoman(946);
	return 0;
}
