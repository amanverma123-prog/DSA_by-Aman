#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int lengthOfLongestSubstring(string s) {
    int n = s.size();
    unordered_map<char, int> mp;
    int maxLen = 0;
    int l = 0, r = 0;

    while (r < n) {
        if (mp.count(s[r]) && mp[s[r]] >= l)
            l = mp[s[r]] + 1;

        mp[s[r]] = r;
        maxLen = max(maxLen, r - l + 1);
        r++;
    }
    return maxLen;
}
int main(){
    string s = "abcabcbb";
    cout<<lengthOfLongestSubstring(s);
    return 0;
}