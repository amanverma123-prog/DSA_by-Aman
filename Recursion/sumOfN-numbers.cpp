#include<iostream>
using namespace std;

// TC = O(n), SC = O(n)
// Parameterized Recursion
// void sumOfN(int i, int sum){
//     if(i<1){
//         cout<<sum;
//         return;
//     }
//     sumOfN(i-1, sum+i);
// }
// int main(){
//     int n = 3;
//     sumOfN(n, 0);
//     return 0;
// }

// Functional Recursion
int sumOfN(int n){
    if(n == 0) return 0;

    return n + sumOfN(n-1);
}
int main(){
    int n = 3;
    cout<<sumOfN(n);
    return 0;
}