#include<iostream>
#include<climits>
using namespace std;
string minWindow(string s, string t) {
    int hash[256] = {0};
    for(int i = 0;i<t.size();i++)
        hash[t[i]]++;
    
    int l = 0, r = 0;
    int minLen = INT_MAX;
    int cnt = t.size();
    int sIdx = -1;
    while(r < s.size()){
        if(hash[s[r]] > 0)
            cnt--;
        hash[s[r]]--;

        while(cnt == 0){
            if((r-l+1) < minLen){
                minLen = r-l+1;
                sIdx = l;
            }
            hash[s[l]]++;
            if(hash[s[l]] > 0)
                cnt++;
            l++;
        }
        r++;
    }
    return minLen == INT_MAX ? "" : s.substr(sIdx, minLen);
}
int main(){
    string s = "ddaaabbca";
    string t = "abc";
    string res = minWindow(s, t);
    for(char c : res)
        cout<<c;
    return 0;
}