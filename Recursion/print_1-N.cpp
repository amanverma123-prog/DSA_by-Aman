#include<iostream>
using namespace std;

void print(int i, int n){
    if(i > n) return;

    cout<<i;
    print(i+1, n);
}

int main(){
    int n = 5;
    print(1,n);
    return 0;
}

// Backtracking
// void print(int i, int n){
//     if(i < 1) return;

//     print(i-1, n);
//     cout<<i;
// }
// int main(){
//     int n = 5;
//     print(n,n);
//     return 0;
// }