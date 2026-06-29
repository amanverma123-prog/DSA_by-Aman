#include<iostream>
#include<vector>
using namespace std;
// Xor from 1 to N (TC = O(1), SC = O(1))
int xorInRange(int n){
    if(n%4 == 1) return 1;
    if(n%4 == 2) return n+1;
    if(n%4 == 3) return 0;
    if(n%4 == 0) return n;
}

// TC = O(1), SC = O(1)
int findRangeXOR(int l,int r){
    return xorInRange(l-1) ^ xorInRange(r);
}
int main(){
    int l = 4, r = 7;
    cout<<findRangeXOR(l, r);
    return 0;
}
