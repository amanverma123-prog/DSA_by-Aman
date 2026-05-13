#include<iostream>
#include<vector>
#include<set>

using namespace std;

// Brute Force (Using Recursion) --> TC = O(n^3), SC = O(n)
// vector<int> ans;
// set<int> st;

// void solve(vector<int>& digits, vector<bool>& used, int num) {
//     if (num >= 100) {
//         if (num % 2 == 0) {
//             st.insert(num);
//         }
//         return;
//     }
//     for (int i = 0; i < digits.size(); i++) {
//         if (used[i])
//             continue;
//         if (num == 0 && digits[i] == 0)
//             continue;
//         used[i] = true;
//         solve(digits, used, num * 10 + digits[i]);
//         used[i] = false;
//     }
// }
// vector<int> findEvenNumbers(vector<int>& digits) {
//     vector<bool> used(digits.size(), false);
//     solve(digits, used, 0);
//     for (int x : st) {
//         ans.push_back(x);
//     }
//     return ans;
// }

// Optimized --> TC = O(1), SC = O(1)
vector<int> findEvenNumbers(vector<int>& digits) {
    vector<int> freq(10, 0);
    for (int d : digits) {
        freq[d]++;
    }
    vector<int> ans;
    for (int num = 100; num <= 998; num += 2) {
        int a = num / 100;
        int b = (num / 10) % 10;
        int c = num % 10;
        vector<int> temp = freq;
        if (temp[a] > 0) {
            temp[a]--;
            if (temp[b] > 0) {
                temp[b]--;
                if (temp[c] > 0) {
                    ans.push_back(num);
                }
            }
        }
    }
    return ans;
}
int main() {
    vector<int> digits = {2,1,3,0};
    vector<int> result = findEvenNumbers(digits);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}