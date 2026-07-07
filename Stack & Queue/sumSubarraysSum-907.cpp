#include<iostream>
#include<vector>
#include<stack>
using namespace std;
// Brute force --> (for small inputs) (TC = O(n^2), SC = O(1))
// int sumSubarrayMins(vector<int>& arr) {
//     int mod = (int)(1e9 + 7);
//     int sum = 0;

//     for(int i = 0;i<arr.size();i++){
//         int mini = arr[i];
//         for(int j = i;j<arr.size();j++){
//             mini = min(mini, arr[j]);
//             sum = (sum + mini)%mod;
//         }
//     }
//     return sum;
// }

vector<int> nse(vector<int>& a) {
    int n = a.size();
    stack<int> st;
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && a[st.top()] >= a[i]) {
            st.pop();
        }
        ans[i] = st.empty() ? n : st.top();
        st.push(i);
    }
    return ans;
}

vector<int> psee(vector<int>& a) {
    int n = a.size();
    stack<int> st;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[st.top()] > a[i]) {
            st.pop();
        }
        ans[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return ans;
}

// Optimal --> TC = O(n), SC = O(n)
int sumSubarrayMins(vector<int>& arr) {
    int mod = (int)(1e9 + 7);
    long long total = 0;

    vector<int> next = nse(arr);
    vector<int> prev = psee(arr);

    for (int i = 0; i < arr.size(); i++) {
        int left = i - prev[i];
        int right = next[i] - i;

        total = (total + (right * left * 1LL * arr[i]) % mod) % mod;
    }
    return total;
}

int main(){
    vector<int> a = {3,1,2,4};
    cout<<sumSubarrayMins(a);
    return 0;
}