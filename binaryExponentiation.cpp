#include<iostream>
using namespace std;
int binaryExpo(int n, int x){
    int binForm = n;
    int ans = 1;
    while(binForm > 0){
        if(binForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}
int main(){
    int n = 30; // 101
    int x = 2;
    cout<<binaryExpo(n,x);
    return 0;
}