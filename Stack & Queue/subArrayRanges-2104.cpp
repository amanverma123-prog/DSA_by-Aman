#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> nse(vector<int> &a){
    int n = a.size();
    stack<int> st;
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--){
        while (!st.empty() && a[st.top()] >= a[i]){
            st.pop();
        }
        ans[i] = st.empty() ? n : st.top();
        st.push(i);
    }
    return ans;
}

vector<int> psee(vector<int> &a){
    int n = a.size();
    stack<int> st;
    vector<int> ans(n);

    for (int i = 0; i < n; i++){
        while (!st.empty() && a[st.top()] > a[i]){
            st.pop();
        }
        ans[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return ans;
}

vector<int> nge(vector<int> &a){
    int n = a.size();
    stack<int> st;
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--){
        while (!st.empty() && a[st.top()] <= a[i]){
            st.pop();
        }
        ans[i] = st.empty() ? n : st.top();
        st.push(i);
    }
    return ans;
}

vector<int> pgee(vector<int> &a){
    int n = a.size();
    stack<int> st;
    vector<int> ans(n);

    for (int i = 0; i < n; i++){
        while (!st.empty() && a[st.top()] < a[i]){
            st.pop();
        }
        ans[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return ans;
}

long long sumSubarrayMins(vector<int> &arr){
    long long total = 0;

    vector<int> next = nse(arr);
    vector<int> prev = psee(arr);

    for (int i = 0; i < arr.size(); i++){
        long left = i - prev[i];
        long right = next[i] - i;

        total = (total + (right * left * 1LL * arr[i]));
    }
    return total;
}

long long sumSubarrayMaxs(vector<int> &arr){
    long long total = 0;

    vector<int> next = nge(arr);
    vector<int> prev = pgee(arr);

    for (int i = 0; i < arr.size(); i++){
        long long left = i - prev[i];
        long long right = next[i] - i;

        total = (total + (left * right) * arr[i]);
    }

    return total;
}

long long subArrayRanges(vector<int> &nums){
    return sumSubarrayMaxs(nums) - sumSubarrayMins(nums);
}
int main(){
    vector<int> a = {1,2,3};
    cout<<subArrayRanges(a);
    return 0;
}