#include<iostream>
using namespace std;
// Brute Force --> TC = O(n^3), SC = (n)   +   TLE
// bool fun(string& s){
//     int l = 0, r = s.size()-1;
//     while(l<r){
//         if(s[l] != s[r]){
//             return false;
//         }
//         l++;
//         r--;
//     }
//     return true;
// }
// string longestPalindrome(string s) {
//     int len = 0;
//     string res = "";
//     for(int i = 0;i<s.size();i++) {
//         for(int j = i;j<s.size();j++){
//             int maxLen = j-i+1;
//             string subS = s.substr(i,maxLen);
//             if(fun(subS)){
//                 if(maxLen > len){
//                     res = subS;
//                     len = maxLen;
//                 }
//             }
//         }
//     }
//     return res;
// }

// Optimal --> TC = O(), SC = O()
string longestPalindrome(string s) {
    int start = 0;
    int maxLen = 1;
    for(int i = 0; i < s.size(); i++) {
        // odd
        int l = i;
        int r = i;
        while(l >= 0 && r < s.size() && s[l] == s[r]) {
            if(r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--; r++;
        }
        // even
        l = i;
        r = i + 1;
        while(l >= 0 && r < s.size() && s[l] == s[r]) {
            if(r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--; r++;
        }
    }
    return s.substr(start, maxLen);
}
int main(){
    string s = "cbbd";
    cout<<longestPalindrome(s);
    return 0;
}