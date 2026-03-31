#include<iostream>
using namespace std;
int factorial(int n){
    // Using for loop
    // int fact = 1;
    // for(int i = n;i>1;i--){
    //     fact *= i;
    //     cout<<fact<<endl;
    // }
    
    // Recursion method
    if(n == 0 || n == 1) return 1;
    return n*factorial(n-1);
}
int main(){
    cout<<factorial(4);
    return 0;
}