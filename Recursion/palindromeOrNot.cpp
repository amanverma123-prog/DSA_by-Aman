#include<iostream>
using namespace std;
bool isPali(int i, int n, string s){
    if(i >= n/2) return true;
    if(s[i] != s[n-i-1]) return false;
    return isPali(i+1, n, s);
}
int main(){
    string s = "madam";
    int n = s.size();
    cout<<isPali(0,n,s);
    return 0;
}