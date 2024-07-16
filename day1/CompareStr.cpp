#include<bits/stdc++.h>
using namespace std;

string process(string &s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '#') {
            if (!st.empty()) st.pop();  // Pop the top element if stack is not empty
        } else {
            st.push(s[i]);  // Push the current character
        }
    }
    string ans;
    while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());  // Reverse the string as stack gives reverse order
    return ans;
}

bool backspaceCompare(string s, string t) {
    return process(s) == process(t);
}

int main() {
    string s = "y#fo##f";
    string t = "y#f#o##f";

    cout << (backspaceCompare(s, t) ? "True" : "False") << "\n";

    return 0;
}
