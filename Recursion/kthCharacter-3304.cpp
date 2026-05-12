#include<iostream>
using namespace std;
char nextChar(char ch){ 
    return (ch == 'z') ? 'a' : ch + 1; 
}
void buildString(string& s, int k) {
    if (s.length() >= k) {
        return;
    }
    string temp = "";
    for (char ch : s) {
        temp += nextChar(ch);
    }
    s += temp;
    buildString(s, k);
}
char kthCharacter(int k) {
    string s = "a";
    buildString(s, k);
    return s[k - 1];
}
int main(){
    int k = 5;
    cout<<kthCharacter(k);
    return 0;
}