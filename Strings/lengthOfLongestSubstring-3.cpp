#include<iostream>
#include<unordered_set>
using namespace std;
int lengthOfLongestSubstring(string s){
    int n = s.size();
    unordered_set<char> st;
    int l = 0; 
    int maxLen = 0;
    for(int r = 0;r<n;r++){
        while(st.find(s[r]) != st.end()){
            st.erase(s[l]);
            l++;
        }
        st.insert(s[r]);
        maxLen = max(maxLen, r-l+1);
    }
    return maxLen;
}
int main(){
    string s = "abcabcbb";
    cout<<lengthOfLongestSubstring(s);
    return 0;
}