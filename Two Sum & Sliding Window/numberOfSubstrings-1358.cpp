#include<iostream>
#include<vector>
using namespace std;
// Brute Force --> TC = O(n^2), SC = O(1)
// int numberOfSubstrings(string s) {
//     int n = s.size();
//     int cnt = 0;
//     for (int i = 0; i < n; i++) {
//         int hash[3] = {0};
//         for (int j = i; j < n; j++) {
//             hash[s[j] - 'a'] = 1;
//             if ((hash[0] + hash[1] + hash[2]) == 3)
//                 cnt++;
//         }
//     }
//     return cnt;
// }

// Optimal --> TC = O(n), SC = O(1)
int numberOfSubstrings(string s) {
    int n = s.size();
    int cnt = 0;
    vector<int> lastSeen = {-1,-1,-1};
    for(int i = 0;i<n;i++){
        lastSeen[s[i] - 'a'] = i;
        if(lastSeen[0] != -1 && lastSeen[1] != -1 && lastSeen[2] != -1)
            cnt += 1 + min(lastSeen[0], min(lastSeen[1], lastSeen[2]));
    }
    return cnt;
}
int main(){
    string s = "abcabc";
    cout<<numberOfSubstrings(s);
    return 0;
}