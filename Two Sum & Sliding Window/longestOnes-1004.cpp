#include<iostream>
#include<vector>
using namespace std;
// Brute Force --> TC = O(n^2), SC = O(1)
// int longestOnes(vector<int>& nums, int k) {
//     int n = nums.size();
//     int maxLen = 0;
//     for (int i = 0; i < n; i++) {
//         int zero = 0;
//         for (int j = i; j < n; j++) {
//             if (nums[j] == 0)
//                 zero++;
//             if (zero <= k)
//                 maxLen = max(maxLen, j - i + 1);
//             else
//                 break;
//         }
//     }
//     return maxLen;
// }

// Better Approach --> TC = O(2n), SC = O(1)
int longestOnes(vector<int>& nums, int k) {
    int n = nums.size();
    int maxLen = 0;
    int zero = 0;
    int l = 0, r = 0;
    while(r < n){
        if(nums[r] == 0)
            zero++;
        while(zero > k){
            if(nums[l] == 0) zero--;
            l++;
        }
        maxLen = max(maxLen, r-l+1);
        r++;
    }
    return maxLen;
}

int main(){
    vector<int> a = {1,1,1,0,0,0,1,1,1,1,0};
    cout<<longestOnes(a, 2);
    return 0;
}