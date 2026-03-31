#include<iostream>
using namespace std;
int linearSearch(int a[], int n, int v){
    for(int i = 0;i<n;i++){
        if(a[i] == v){
            return i;
        }
    }
    return -1;
}
int main(){
    int n = 6;
    int val = 3;
    int arr[n] = {6,9,4,6,3,7};
    cout<<linearSearch(arr,n,val);
    return 0;
}