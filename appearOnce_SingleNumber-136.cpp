#include<iostream>
using namespace std;
int appearOnce(int a[], int n){
    int x = 0;
    for(int i = 0;i<n;i++){
        x ^= a[i];
    }
    return x;
}
int main(){
    int n = 7;
    int arr[n] = {1,1,2,3,3,4,4};
    cout<<appearOnce(arr,n);
    return 0;
}