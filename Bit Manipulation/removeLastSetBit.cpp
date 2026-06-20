#include<iostream>
#include<vector>
using namespace std;
// TC = O(1), SC = O(1)
int removeLastSetBit(int n){
    return (n & (n-1));
}
int main(){
    int n = 84;
    cout<<removeLastSetBit(n);
    return 0;
}