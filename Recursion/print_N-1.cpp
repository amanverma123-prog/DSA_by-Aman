#include<iostream>
using namespace std;

// void print(int i, int n){
//     if(i > n) return;

//     cout<<n;
//     print(i, n-1);
// }

// int main(){
//     int n = 5;
//     print(1,n);
//     return 0;
// }

// Backtracking
void print(int i, int n){
    if(i > n) return;

    print(i+1, n);
    cout<<i;
}
int main(){
    int n = 5;
    print(1,n);
    return 0;
}