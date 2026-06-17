#include<iostream>
#include<algorithm>
using namespace std;
// TC = O(logn), SC = O(logn)
string decToBin(int x){
    if(x == 0) return "0";
    string ans = "";
    while(x > 0){
        ans += (x % 2 ? '1' : '0');
        x /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    int x = 13;
    string res = decToBin(x);
    cout<<res;
    return 0;
}