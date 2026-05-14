#include<iostream>
#include<vector>
#include<set>
using namespace std;
// Brute Force (Using Recursion) --> TC = O(n³),SC = O(n³)
// void solve(vector<int>& digits, vector<bool>& used, int curr, int len,
//            set<int>& st) {
//     if(len == 3) {
//         if(curr % 2 == 0)
//             st.insert(curr);
//         return;
//     }
//     for(int i = 0; i < digits.size(); i++) {
//         if(used[i])
//             continue;
//         if(len == 0 && digits[i] == 0)
//             continue;
//         used[i] = true;
//         solve(digits, used, curr * 10 + digits[i], len + 1, st);
//         used[i] = false;
//     }
// }
// int totalNumbers(vector<int>& digits) {
//     set<int> st;
//     vector<bool> used(digits.size(), false);
//     solve(digits, used, 0, 0, st);
//     return st.size();
// }

// Optimal --> TC = O(n³), SC = O(n³)
int totalNumbers(vector<int>& digits) {
    set<int> st;
    int n = digits.size();
    for(int i = 0; i < n; i++) {
        if(digits[i] == 0)
            continue;
        for(int j = 0; j < n; j++) {
            if(i == j)
                continue;
            for(int k = 0; k < n; k++) {
                if(i == k || j == k)
                    continue;
                if(digits[k] % 2 != 0)
                    continue;
                int num = digits[i] * 100 +
                          digits[j] * 10 +
                          digits[k];
                st.insert(num);
            }
        }
    }
    return st.size();
}
int main() {
    vector<int> digits = {1,2,3,4};
    cout << totalNumbers(digits);
    return 0;
}