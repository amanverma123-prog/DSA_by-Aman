#include<iostream>
using namespace std;

// Using Recursion TC = O(logn), SC = O(logn)
// bool isPowerOfTwo(int n) {
//     if(n == 1) return true;
//     if(n <= 0 || n%2 != 0) return false;
//     return isPowerOfTwo(n/2);
// }
// int main(){
//     int n = 256;
//     cout<<isPowerOfTwo(n);
//     return 0;
// }


// Optimal without Recursion --> TC = O(1), SC = O(1)
bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n-1)) == 0;
}
int main(){
    int n = 256;
    cout<<isPowerOfTwo(n);
    return 0;
}