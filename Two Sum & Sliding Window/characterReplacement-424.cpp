#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
// Brute Force --> TC = O(n^2), SC = O(26)
// int characterReplacement(string s, int k) {
//     int n = s.size();
//     int maxLen = 0;
//     for (int i = 0; i < n; i++) {
//         int hash[26] = {0};
//         int maxFreq = 0;
//         for (int j = i; j < n; j++) {
//             hash[s[j] - 'A']++;
//             maxFreq = max(maxFreq, hash[s[j] - 'A']);
//             int changes = (j - i + 1) - maxFreq;
//             if (changes <= k)
//                 maxLen = max(maxLen, j - i + 1);
//             else
//                 break;
//         }
//     }
//     return maxLen;
// }

// Optimal --> TC = O(n), SC = O(1)
int characterReplacement(string s, int k) {
    int n = s.size();
    int maxLen = 0;
    int maxFreq = 0;
    int freq[26] = {0};
    int l = 0, r = 0;

    while(r < n){
        freq[s[r] - 'A']++;
        maxFreq = max(maxFreq, freq[s[r] - 'A']);

        while(((r-l+1) - maxFreq) > k){
            freq[s[l] - 'A']--;
            l++;

            maxFreq = 0;
            for(int i = 0;i<26;i++){
                maxFreq = max(maxFreq, freq[i]);
            }
        }
        if(((r-l+1) - maxFreq) <= k)
            maxLen = max(maxLen, r-l+1);
        r++;
    }
    return maxLen;
}
int main(){
    string s = "AABABBA";
    int k = 2;
    cout<<characterReplacement(s, k);
    return 0;
}