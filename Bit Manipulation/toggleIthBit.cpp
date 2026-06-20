#include<iostream>
#include<vector>
using namespace std;
// TC = O(1), SC = O(1)
int toggleIthBit(int n, int i){
    int val = (1<<i);
    return (n ^ val);
}
int main(){
    int n = 13;
    int i = 3;
    cout<<toggleIthBit(n, i);
    return 0;
}