// #include<iostream>
// using namespace std;
// // Brute force -> TC = O(N^2)
// void rightRotate(int a[], int n,int k){
//     for(int j = 0;j<k;j++){
//         int temp = a[n-1];
//         for(int i = n-2;i>=0;i--){
//             a[i+1] = a[i];
//         }
//         a[0] = temp;
//     }
//     for(int i = 0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int n = 7,k = 3;
//     int arr[n] = {1,2,3,4,5,6,7};
//     rightRotate(arr,n,k); // 7,1,2,3,4,5,6
//     return 0;
// }

// Better Approach -> TC = O(N+M)
// #include<iostream>
// using namespace std;
// void rightRotate(int a[], int n,int k){
//     k = k % n;
//     int temp[k]; // Store k elements
//     for(int i = 0;i<k;i++){
//         temp[i] = a[n-k+i];
//     }
//     // Shifting elements
//     for(int i = k;i>=0;i--){
//         a[i+k] = a[i];
//     }
//     // Put back k-elements
//     for(int i = 0;i<k;i++){
//         a[i] = temp[i];
//     }
    
// }
// int main(){
//     int n = 7,k = 3;
//     int arr[n] = {1,2,3,4,5,6,7};
//     rightRotate(arr,n,k); // 5,6,7,1,2,3,4
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Optimal

#include<iostream>
#include<algorithm>
using namespace std;
void rightRotate(int a[], int n,int k){
    reverse(a,a+(n-k));
    reverse(a+(n-k),a+n);
    reverse(a,a+n);
}
int main(){
    int n = 7,k = 3;
    int arr[n] = {1,2,3,4,5,6,7};
    rightRotate(arr,n,k); // 5,6,7,1,2,3,4
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}