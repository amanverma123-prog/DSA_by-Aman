#include<iostream>
using namespace std;
// Using Recursion --> TC = O(logn), SC = O(logn)
// bool isPowerOfFour(int n) {
//     if (n == 1)
//         return true;
//     if (n <= 0 || n % 4 != 0)
//         return false;
//     return isPowerOfFour(n / 4);
// }
// OR (Bit Manipulation) --> TC = O(1), SC = O(1)
bool isPowerOfFour(int n) {
    return n > 0 && (n & (n - 1)) == 0 && (n - 1) % 3 == 0;
}
int main(){
    int n = 16;
    cout<<isPowerOfFour(n);
    return 0;
}