#include<bits/stdc++.h>
using namespace std;
class MyStack2 {
public:
    queue<int> q1;
    MyStack() {}
    void push(int x) {
        q1.push(x);
        for (int i = 1; i < q1.size(); i++) {
            int ele = q1.front();
            q1.pop();
            q1.push(ele);
        }
    }
    int pop() {
        int ele = q1.front();
        q1.pop();
        return ele;
    }
    int top() {
        return q1.front();
    }
    bool empty() { return q1.empty();}
};


class MyStack1 {
public:
    queue<int> input,output;

    MyStack() {}
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        int ele;
        if(!input.empty()) {
            while (input.size()-1){
                output.push(input.front());
                input.pop();
            }
            ele = input.front();
            input.pop();
        }
        else {
            while (output.size()-1){
                input.push(output.front());
                output.pop();
            }
            ele = output.front();
            output.pop();
        }
        return ele;
    }
    
    int top() {
        if(!input.empty()) return input.back();
        else return output.back();
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
int main()
{

    MyStack2* obj = new MyStack2();
    obj->push(1);
    obj->push(2);
    obj->push(3);
    obj->push(4);

    cout<<obj->pop();
    cout<<obj->pop();

    obj->push(5);
    obj->push(6);
    obj->push(7);
    cout<<obj->pop();
    cout<<obj->top();
    cout<<obj->empty();

    return 0;
}