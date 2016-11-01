#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<fstream>
#include<vector>
#include<math.h>
using namespace std;
//DATE:2016/04/26    TIME:02:22:51
class Queue {
public:
	vector<int> qq;
    // Push element x to the back of queue.
    void push(int x) {
        qq.push_back(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        qq.erase(qq.begin());
    }

    // Get the front element.
    int peek(void) {
        return qq[0];
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return qq.empty();
    }
};
int main(void){

	return 0;
}
