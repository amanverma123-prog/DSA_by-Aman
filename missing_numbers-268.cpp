#include<iostream>
using namespace std;
// My own --> TC = O(n)  SC = O(1)
// int miss(int a[],int n){
//     for(int j = 0;j<n-1;j++){
//         if(a[j] != j+1){
//             return j+1;
//         }
//     }
//     return n;
// }
// int main(){
//     int n = 5;
//     int arr[n] = {1,2,3,4};
//     cout<<miss(arr,n);
//     return 0;
// }

// Sum --> TC = O(n)  SC = O(1)
// int miss(int a[], int n){
//     int sum = (n*(n+1))/2;
//     int s2 = 0;
//     for(int i = 0;i<n-1;i++){
//         s2 += a[i];
//     }
//     return (sum - s2);
// }
// int main(){
//     int n = 5;
//     int arr[n] = {1,2,3,4,5};
//     cout<<miss(arr,n);
//     return 0;
// }

// // Xor --> TC = O(n)  SC = O(1)  --> Slightly better than Sum
int miss(int a[], int n){
    int x = 0;
    for(int i = 0;i<n-1;i++){
        x = x ^ a[i] ^ (i+1);
    }
    return x^n;
}
int main(){
    int n = 5;
    int arr[n] = {1,2,4,5};
    cout<<miss(arr,n);
    return 0;
}