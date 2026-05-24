#include<iostream>
#include<vector>
using namespace std;
// Brute Force --> TC = (n! x n), SC = O(n) (using Recursion)
// string ans = "";
// int count = 0;
// void solve(vector<int>& nums, vector<bool>& used, string curr, int n,
//             int k) {
//     if (curr.size() == n) {
//         count++;
//         if (count == k) ans = curr;
//         return;
//     }
//     for (int i = 0; i < n; i++) {
//         if (used[i]) continue;
//         used[i] = true;
//         solve(nums, used, curr + to_string(nums[i]), n, k);
//         used[i] = false;
//     }
// }
// string getPermutation(int n, int k) {
//     vector<int> nums;
//     for (int i = 1; i <= n; i++) {
//         nums.push_back(i);
//     }
//     vector<bool> used(n, false);
//     solve(nums, used, "", n, k);
//     return ans;
// }

// Optimal --> TC =  O(n^2), SC = (n)
void solve(vector<int>& nums, int k, int fact, string& ans) {
    // base case
    if (nums.size() == 0)
        return;
        
    int idx = k / fact;
    ans += to_string(nums[idx]);
    nums.erase(nums.begin() + idx);
    if (nums.size() == 0) return;
    k = k % fact;
    fact = fact / nums.size();
    solve(nums, k, fact, ans);
}
string getPermutation(int n, int k) {
    vector<int> nums;
    int fact = 1;
    for (int i = 1; i < n; i++) {
        fact *= i;
        nums.push_back(i);
    }
    nums.push_back(n);
    string ans = "";
    solve(nums, k - 1, fact, ans);
    return ans;
}
int main(){
    int n = 3, k = 3;
    cout<<getPermutation(n, k);
    return 0;
}