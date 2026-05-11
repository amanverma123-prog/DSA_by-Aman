#include<iostream>
using namespace std;

// TC = O(n), SC = O(n)
bool isPowerOfTwo(int n) {
    if(n == 1) return true;
    if(n <= 0 || n%2 != 0) return false;
    return isPowerOfTwo(n/2);
}
int main(){
    int n = 256;
    cout<<isPowerOfTwo(n);
    return 0;
}