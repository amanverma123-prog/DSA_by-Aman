#include<iostream>
using namespace std;
int fun(int a[], int n){
    int digitCount = 0;
    for(int  i = 0;i<n;i++){
        int digits = 0;
        int num = a[i];
        if(num == 0){
            digits = 1;
        } else{
            while(num > 0){
                num = num/10;
                digits++;
            }
            if(digits%2 == 0){
                digitCount++;
            }
        }
    }
    return digitCount;
}
int main(){
    int n = 5;
    int arr[n] = {2,65,444,3421,6};
    cout<<fun(arr, n);
    return 0;
}