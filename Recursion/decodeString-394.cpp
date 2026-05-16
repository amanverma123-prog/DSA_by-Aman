#include<iostream>
using namespace std;
string solve(string& s, int& i) {
    string result = "";
    int num = 0;
    while (i < s.size()) {
        if (isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
        } else if (s[i] == '[') {
            i++;
            string temp = solve(s, i);
            while (num--) {
                result += temp;
            }
            num = 0;
        } else if (s[i] == ']') {
            return result;
        } else {
            result += s[i];
        }
        i++;
    }
    return result;
}
string decodeString(string s) {
    int i = 0;
    return solve(s, i);
}
int main(){
    string s = "3[a]2[bc]";
    cout<<decodeString(s);
    return 0;
}