#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int a = 5;
    int b = 10;

    cout<<"Before Swap : a = "<<a<<" and b = "<<b<<endl;
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    cout<<"After Swap : a = "<<a<<" and b = "<<b;
    return 0;
}