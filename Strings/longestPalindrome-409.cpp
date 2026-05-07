#include<iostream>
#include<unordered_map>
using namespace std;
// TC = O(n), SC = O(1)
int longestPalindrome(string s) {
    unordered_map<char, int> mp;
    for(char ch : s){
        mp[ch]++;
    }
    int len = 0;
    bool odd = false;
    for(auto it : mp){
        if(it.second%2 == 0){
            len += it.second;
        } else{
            len += it.second - 1;
            odd = true;
        }
    }
    if(odd) len++;
    return len;
}
int main(){
    string s = "abccccdd";
    cout<<longestPalindrome(s);
    return 0;
}