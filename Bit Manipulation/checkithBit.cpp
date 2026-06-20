#include<iostream>
#include<vector>
using namespace std;
// TC = O(1), SC = O(1)
bool checkIthBit(int n, int i) {
    // Using left shifts
    // int val = (1<<i);
    // return (n & val);


    // Using right shifts
    int val = (n>>i);
    return (val & 1);
}
int main(){
    int n = 13;
    int i = 2;
    cout<<checkIthBit(n, i);
    return 0;
}