#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> st;
    vector<int> ans;
    unordered_map<int,int> mpp;
    for (int i = nums2.size() - 1; i >= 0; i--) {
        while(!st.empty() && st.top()<= nums2[i]){
            st.pop();
        }
        mpp[nums2[i]] = st.empty()?-1:st.top();
        st.push(nums2[i]);
    }

    for(auto num :nums1){
        ans.push_back(mpp[num]);
    }
    return ans;
}
int main(){
	vector<int> nums1={4,1,2},nums2={1,2,3,4};
	vector<int> ans = nextGreaterElement(nums1,nums2);
	for(auto  it:ans){
		cout<<it<<" ";
	}
	return 0;
}