#include<bits/stdc++.h>
using namespace std;
class MyQueue {

public:
    stack<int> s1, s2;
    MyQueue() {}

    void push(int x) { s1.push(x); }

    int pop() {
        if (s2.empty()) {
            while (s1.size()) {
                int ele = s1.top();
                s1.pop();
                s2.push(ele);
            }
        }
        int ele = s2.top();
        s2.pop();
        return ele;
    }

    int peek() {
        if (s2.empty()) {
            while (s1.size()) {
                int ele = s1.top();
                s1.pop();
                s2.push(ele);
            }
        }
        return s2.top();
    }

    bool empty() { return s1.empty() && s2.empty(); }
};

int main(){
	MyQueue* obj = new MyQueue();
	obj->push(12);
	int param_2 = obj->pop();
	int param_3 = obj->peek();
	bool param_4 = obj->empty();
	return 0;
}
