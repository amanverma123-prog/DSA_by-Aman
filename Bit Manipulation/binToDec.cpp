#include<iostream>
#include<vector>
using namespace std;
// TC = O(len), SC = O(1)
int binToDec(string x){
    int ans = 0;
    int p2 = 1;
    for(int i = x.size()-1;i>=0;i--){
        if(x[i] == '1'){
            ans += p2;
        }
        p2 *= 2;
    }
    return ans;
}
int main(){
    string x = "1101";
    cout<<binToDec(x);
    return 0;
}