#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<vector>

using namespace std;
#define MIN(x,y) (x<y?x:y)
class MinStack {
	vector<int> min;
	vector<int> stack;
public:
    /** initialize your data structure here. */
    MinStack() {
        min.clear();
        stack.clear();
    }
    
    void push(int x) {
    	
        if(min.empty())
			min.push_back(x);
        else 
        {
			int result;
			result=MIN(x,min.back());
        	min.push_back(result);
        	
		}
		
		
		stack.push_back(x);
    }
    
    void pop() {
        if(!min.empty()) 
        min.pop_back();
        
        if(!stack.empty())
        stack.pop_back();
    
    	return;
	}
    
    int top() {
        return stack.back();
        
    }
    
    int getMin() {
        return min.back();
    }
};

int main(void){
MinStack minStack;//= new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
cout<<minStack.getMin();   //--> Returns -3.
minStack.pop();
cout<<minStack.top();      //--> Returns 0.
cout<<minStack.getMin();   //--> Returns -2.	
	
	return 0;
}
