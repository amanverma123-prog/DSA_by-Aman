#include<iostream>
using namespace std;
int countOddOccuringNumbers(int a[], int n){
    int digitCount = 1;
    int sum = 0;
    for(int i = 1;i<n;i++){
        if(a[i] == a[i-1]){
            digitCount++;
        }
        else{
            if(digitCount%2 != 0){
                sum += a[i-1];
            }
            digitCount = 1;
        }
    }
    if(digitCount%2 != 0){
        sum += a[n-1];
    }
    return sum;
}
int main(){
    int n = 14;
    int arr[n] = {4,4,4,5,5,6,6,6,6,6,7,7,7,7};
    cout<<countOddOccuringNumbers(arr,n);
    return 0;
}