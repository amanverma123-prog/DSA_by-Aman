#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

// // 2nd largest element

// 1) Brute force
// int main(){
//     int n = 6;
//     int arr[n] = {1,2,3,7,7,5};
//     sort(arr,arr+n);
//     int largest = arr[n-1];
//     int secLargest = INT_MIN;
//     for(int i = n-2;i>=0;i--){
//         if(arr[i] != largest){
//             secLargest = arr[i];
//             break;
//         }
//     }
//     cout<<secLargest;
//     return 0;
// }


// 2) Better
// int main(){
//     int arr[] = {1,2,3,7,7,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     if(n<2) return -1;
//     sort(arr,arr+n); // 1 2 3 5 7 7
//     int largest = arr[0]; // 1
//     for(int i = 0;i<n;i++){
//         if(arr[i]>largest){
//             largest = arr[i];
//         }
//     } // largest = 7
//     int secLargest = INT_MIN;
//     for(int i = 0;i<n;i++){
//         if(arr[i]>secLargest && arr[i] != largest){
//             secLargest = arr[i];
//         }
//     }
//     cout<<"Second Largest : "<<secLargest;
//     return 0;
// }


// 3) Optimal
int main(){
    int arr[] = {4,1,8,6,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(n<2) return -1;
    int largest = arr[0];
    int secLargest = -1;
    for(int i = 1;i<n;i++){
        if(arr[i]>largest){
            secLargest = largest; // 4 
            largest = arr[i]; // 8
        }
        else if(arr[i]>secLargest){
            secLargest = arr[i]; // 6
        }
    }
    cout<<"Second largest : "<<secLargest;
    return 0;
}


// Second Smallest

// int main(){
//     int arr[] = {4,1,8,6,3,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     if(n<2) return -1;
//     int smallest = arr[0];
//     int secSmallest = INT_MAX;
//     for(int i = 1;i<n;i++){
//         if(arr[i]<smallest){
//             secSmallest = smallest;
//             smallest = arr[i];
//         }
//         if(arr[i]<secSmallest && arr[i] != smallest){
//             secSmallest = arr[i];
//         }
//     }
//     cout<<"Second largest : "<<secSmallest;
//     return 0;
// }

