#include<iostream>
#include<vector>
using namespace std;
// TC = O(1), SC = O(1)
int clearIthBit(int n, int i){
    int val = ~(1<<i);
    return (n & val);
}
int main(){
    int n = 13;
    int i = 2;
    cout<<clearIthBit(n, i);
    return 0;
}