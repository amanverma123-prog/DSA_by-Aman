#include<iostream>
#include<vector>
using namespace std;
// TC = O(2^n * n), SC = (n)
bool isPali(string str, int start, int end){
    while(start < end){
        if(str[start++] != str[end--])
            return false;
    }
    return true;
}
void fun(int idx, string s, vector<string>& ds, vector<vector<string>>& ans){
    // base case
    if(idx == s.size()){
        ans.push_back(ds);
        return;
    }
    // 2^n
    for(int i = idx;i<s.size();++i){
        if(isPali(s, idx, i)){
            ds.push_back(s.substr(idx, (i - idx + 1)));
            fun(i+1, s, ds, ans);
            ds.pop_back();
        }
    }
}
vector<vector<string>> partition(string s) {
    vector<vector<string>> ans;
    vector<string> ds;
    fun(0, s, ds, ans);
    return ans;
}
int main(){
    string s = "aab";
    vector<vector<string>> res = partition(s);
    for(auto i : res){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}