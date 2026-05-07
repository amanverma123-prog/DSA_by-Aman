#include<iostream>
#include<vector>
using namespace std;
// TC = O(n), SC = O(1)
string printSequence(string& S) {
    vector <string> v = {
        "2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"
    };

    string res = "";
    for(int i = 0;i<S.size();i++){
        if(S[i] == ' '){
            res += "0";
        }
        int val = S[i] - 'A';
        res += v[val];
    }
    return res;
}
int main(){
    string s = " HELLO";
    cout<<printSequence(s);
    return 0;
}