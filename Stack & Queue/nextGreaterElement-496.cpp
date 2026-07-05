#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;

// GeekForGeeks Question ( TC = O(2n), SC = O(n))
// vector<int> nextLargerElement(vector<int> arr) {
//     int n = arr.size();
//     vector<int> ans(n);
//     stack<int> st;

//     for(int i = n-1;i>=0;i--){
//         while(!st.empty() && arr[i] >= st.top()){
//             st.pop();
//         }

//         if(st.empty()) ans[i] = -1;
//         else ans[i] = st.top();

//         st.push(arr[i]);
//     }
//     return ans;
// }

// Leetcode Question ( TC = O(2n), SC = O(2n))
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    int n2 = nums2.size();
    stack<int> st;
    unordered_map<int, int> mp;

    for (int i = n2 - 1; i >= 0; i--) {
        while (!st.empty() && nums2[i] >= st.top()) {
            st.pop();
        }

        if (st.empty()){
            mp[nums2[i]] = -1;
        }
        else{
            mp[nums2[i]] = st.top();
        }

        st.push(nums2[i]);
    }

    vector<int> ans;
    for (int x : nums1){
        ans.push_back(mp[x]);
    }
    return ans;
}

int main(){
    vector<int> nums1 = {4,1,2};
    vector<int> nums2 = {1,3,4,2};
    vector<int> res = nextGreaterElement(nums1, nums2);
    for(int i : res){
        cout<<i<<" ";
    }
    return 0;
}