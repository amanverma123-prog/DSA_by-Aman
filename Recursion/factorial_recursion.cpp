#include<iostream>
using namespace std;

// TC = O(n), SC = O(n)
int fact(int n){
    if(n == 0 || n == 1) return 1;

    return n * fact(n-1);
}
int main(){
    int n = 6;
    cout<<fact(n);
    return 0;
}