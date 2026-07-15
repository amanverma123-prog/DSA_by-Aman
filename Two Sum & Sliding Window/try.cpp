#include<iostream>
#include<vector>
using namespace std;
// Brute Force --> TC = O(n^2), SC = O(1)
// int longestSubarraySum(vector<int> a, int k){
//     int n = a.size();
//     int maxLen = 0;
//     for(int i=0;i<n;i++){
//         int sum = 0;
//         for(int j=i;j<n;j++){
//             sum += a[j];
//             if(sum <= k){
//                 maxLen = max(maxLen, j-i+1);
//             } else if(sum > k) break;
//         }
//         sum -= a[i];
//     }
//     return maxLen;
// }

// Better --> TC = O(2n), SC = O(1)
// int longestSubarraySum(vector<int> a, int k){
//     int n = a.size();
//     int maxLen = 0;
//     int sum = 0;
//     int l = 0, r = 0;
//     while(r < n && l <= r){
//         sum += a[r];
//         while(sum > k){
//             sum -= a[l];
//             l++;
//         }
//         if(sum <= k){
//             maxLen = max(maxLen, r-l+1);
//         }
//         r++;
//     }
//     return maxLen;
// }

// Optimal --> TC = O(n), SC = O(1)
int longestSubarraySum(vector<int> a, int k){
    int n = a.size();
    int maxLen = 0;
    int sum = 0;
    int l = 0, r = 0;
    while(r < n && l <= r){
        sum += a[r];
        if(sum > k){
            sum -= a[l];
            l++;
        } else {
            maxLen = max(maxLen, r-l+1);
        }
        r++;
    }
    return maxLen;
}
int main(){
    vector<int> a = {2,5,1,7,10};
    int k = 14;
    cout<<longestSubarraySum(a, k);
    return 0;
}