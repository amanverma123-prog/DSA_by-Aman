#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// GeekForGeeks Question ( TC = O(2n), SC = O(n))
vector<int> nextSmallerElement(vector<int> arr) {
    int n = arr.size();
    vector<int> ans(n);
    stack<int> st;

    for(int i = 0;i<n;i++){
        while(!st.empty() &&  st.top() >= arr[i]){
            st.pop();
        }

        // if(st.empty()) ans[i] = -1;
        // else ans[i] = st.top();

        ans[i] = st.empty() ? -1 : st.top();

        st.push(arr[i]);
    }
    return ans;
}

int main(){
    vector<int> nums = {5,7,9,6,7,4,5,1,3,7};
    vector<int> res = nextSmallerElement(nums);
    for(int i : res){
        cout<<i<<" ";
    }
    return 0;
}