#include <iostream>
#include <vector>
using namespace std;
int countSetBits(int n){
    // Builtin STL
    // return __builtin_popcount(n);

    // Brute force
    // if(n == 0) return 0;
    // int count = 0;
    // while(n > 0){
    //     if(n%2 == 1){
    //         count++;
    //     }
    //     n /= 2;
    // }
    // return count;

    // Better --> TC = O(logn)
    // int count = 0;
    // while (n > 0){
    //     count += (n & 1);
    //     n = n >> 1;
    // }
    // return count;

    // Optimal --> TC = O(no. of set bits = MAX -> 31)
    int count = 0;
    while(n > 0){
        n = n & (n-1);
        count++;
    }
    return count;
}
int main(){
    int n = 15;
    cout << countSetBits(n);
    return 0;
}