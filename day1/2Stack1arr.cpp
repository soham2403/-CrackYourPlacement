#include <bits/stdc++.h>

using namespace std;
class twoStacks {
    private:
        vector<int> arr;
        int i,j;
    
    public:

    twoStacks() {
        i = -2;
        j = -1;
        arr.resize(100, 0);
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        i+=2;
        arr[i] = x;
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        j+=2;
        arr[j] = x;
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        if(i<0) return -1;
        int ele = arr[i];
        arr[i] = 0;
        i-=2;
        return ele;
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
        if(j<0) return -1;
        int ele = arr[j];
        arr[j] = 0;
        j-=2;
        return ele;
    }
};


//{ Driver Code Starts.

int main() {

    twoStacks st = twoStacks();
    cout<<st.pop1();
    cout<< st.pop1();
    st.push1(12);
    st.push2(2);
    cout<<st.pop1();
    cout<<st.pop2();
    cout<<st.pop1();
    cout<<st.pop2();

    return 0;
}