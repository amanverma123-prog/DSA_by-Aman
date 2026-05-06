#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
// TC = O(n), SC = O(n)
bool wordPattern(string pattern, string s) {
    unordered_map<char, string> mp;
    unordered_map<string, char> mp2;
    int i = 0, n = s.size();
        
    for (char c : pattern) {
        if (i >= n)
            return false;

        string word = "";

        while (i < n && s[i] != ' ') {
            word += s[i++];
        }
        if (mp.count(c) && mp[c] != word)
            return false;
        if (mp2.count(word) && mp2[word] != c)
            return false;

        mp[c] = word;
        mp2[word] = c;
        i++;
    }
    return i >= n;
}
int main(){
    string pattern = "abba";
    string s = "dog cat cat dog";
    cout<<wordPattern(pattern, s);
    return 0;
}