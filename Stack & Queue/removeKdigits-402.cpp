#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
string removeKdigits(string num, int k) {
    stack<char> st;
    for(int i = 0;i<num.size();i++){
        while(!st.empty() && k>0 && (st.top()) - '0' > (num[i] - '0')){
            st.pop();
            k--;
        }
        st.push(num[i]);
    }
    while(k>0 && !st.empty()){
        st.pop();
        k--;
    }
    if(st.empty()) return "0";
    
    string ans = "";
    while(!st.empty()){
     ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());

    int i = 0;
    while(i < ans.size() && ans[i] == '0')
        i++;

    ans = ans.substr(i);

    return ans.empty()? "0" : ans;
}
int main(){
    string s = "10200";
    string res = removeKdigits(s, 1);
    for(char c : res){
        cout<<c<<" ";
    }
    return 0;
}