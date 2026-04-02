#include<iostream>
#include<vector>
using namespace std;

// Brute force --> Any Sorting technique (merge sort) -- TC = O(nlogn) , SC = O(n)

// Better approach --> TC = O(2n), SC = O(1)
// vector<int> sortOTT(int a[], int n){
//     int count0 = 0; 
//     int count1 = 0;
//     int count2 = 0;
//     for(int i = 0;i<n;i++){
//         if(a[i] == 0){
//             count0++;
//         } else if(a[i] == 1){
//             count1++;
//         } else {
//             count2++;
//         }
//     }
//     for(int i = 0;i<count0;i++) a[i] = 0;
//     for(int i = count0;i<(count0+count1);i++) a[i] = 1;
//     for(int i = (count0+count1);i<n;i++) a[i] = 2;
//     return vector<int>(a,a+n);
// }

// Optimal --> Dutch National Flag Algorithm 
// 0 - low-1 -> 0,
// low-mid-1 -> 1,  
// mid-high -> random no.(in unsorted manner)  
// high+1 - n-1 -> 2

vector<int> sortOTT(int a[], int n){
    int low = 0; 
    int mid = 0;
    int high = n-1;
    while(mid <= high){
        if(a[mid] == 0){
            swap(a[low],a[mid]);
            low++;
            mid++;
        } else if(a[mid] == 1){
            mid++;
        } else{
            swap(a[mid],a[high]);
            high--;
        }
    }
    return vector<int>(a,a+n);
}
int main(){
    int n = 12;
    int arr[n] = {0,1,2,0,1,2,1,2,0,0,0,1};
    vector<int> x = sortOTT(arr,n);
    for(int val : x){
        cout<<val<<" ";
    }
    return 0;
}