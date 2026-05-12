#include<iostream>
using namespace std;

// TC = O(logn), SC = O(logn)
// bool isPowerOfThree(int n) {
//     if(n == 1) return true;
//     if(n <= 0 || n%3 != 0) return false;
//     return isPowerOfThree(n/3);
// }
// int main(){
//     int n = 90;
//     cout<<isPowerOfThree(n);
//     return 0;
// }

// Optimal without Recursion --> TC = O(1), SC = O(1)
bool isPowerOfThree(int n) {
    return n > 0 && 1162261467 % n == 0;
}
int main(){
    int n = 27;
    cout<<isPowerOfThree(n);
    return 0;
}