#include<iostream>
#include<vector>
using namespace std;

// TC = O(logn)
// Iteration appproach
// int binSearch(vector<int> a, int n, int target){
//     int low = 0;
//     int high = n-1;
//     while (low <= high){
//         int mid = (low + high)/2;
//         if(a[mid] < target){
//             low = mid+1;
//         } else if(a[mid] > target){  
//             high = mid-1;
//         } else{
//             return mid;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> arr = {1,2,4,6,7,8,10}; 
//     int n = arr.size();  // 7
//     int ele = 8;
//     cout<<binSearch(arr, n, ele);
//     return 0;
// }


// Recursion Approach
int recurseBinSearch(vector<int>& a, int low, int high, int target){
    if(low > high) return -1;
    int mid = (low + high)/2;
    if(a[mid] == target) return mid;
    else if(a[mid] < target){
        return recurseBinSearch(a, mid+1, high, target);
    } else {
        return recurseBinSearch(a, low, mid-1, target);
    }
}

int main(){
    vector<int> arr = {1,2,4,6,7,8,10}; 
    int n = arr.size();  // 7
    int ele = 8;
    int low = 0;
    int high = n-1;
    cout<<recurseBinSearch(arr, low, high, ele);
    return 0;
}
