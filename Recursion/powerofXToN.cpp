#include<iostream>
using namespace std;
// TC = O(logn), SC = O(logn)
double solve(double x, long long n){
    if(n == 0) return 1;

    double half = solve(x, n/2);

    if(n%2 == 0)
        return half * half;
    
    return x * half * half;
}
double myPow(double x, int n){
    long long N = n;
    if(n < 0){
        x = 1/x;
        N = -N;
    }
    return solve(x, N);
}
int main(){
    double x = 2.0000;
    int n = -2;
    cout<<myPow(x ,n);
    return 0;
}