#include<iostream>
using namespace std;
// Using Recursion --> TC = O(2^n), SC = O(n)
// int fib(int n) {
//     if(n == 0) return 0;
//     if(n == 1) return 1;

//     return fib(n-1) + fib(n-2);
// }

// Optimized --> TC = O(n), SC = O(1)
int fib(int n) {
    if(n <= 1) return n;

    int prev2 = 0;    
    int prev1 = 1;

    for(int i = 2;i<=n;i++){

        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}
int main(){
    int n = 6;
    cout<<fib(n);
    return 0;
}