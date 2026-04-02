#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

// Brute Force - TC -> O(n^2), SC -> O(1)

// vector <int> twoSum(int a[], int n, int target){
//     for(int i = 0;i<n;i++){
//         int j = 0;
//         while(j<n){
//             if(j == i) j++;
//             if(a[i] + a[j] == target){
//                 return {i,j};
//             } else j++;
//         }
//     }
//     return {-1,-1};
// }

// Better approach - TC -> O(nlogn), SC -> O(n)
// vector<int> twoSum(int a[],int n, int target){
//     map<int, int> mp;
//     for(int i = 0;i<n;i++){
//         int x = a[i];
//         int more = target - x;
//         if(mp.find(more) != mp.end()){
//             return {mp[more],i};
//         }
//         mp[x] = i;
//     }
//     return {-1,-1};
// }

// int main(){
//     int n = 5;
//     int target = 14;
//     int arr[n] = {2,6,5,8,11}; // {2,5,6,8,11}
//     vector<int> ans = twoSum(arr, n, target);
//     cout<<ans[0]<<", "<<ans[1];
//     return 0;
// }


// Optimized approach - TC -> O(nlogn), SC -> O(n)
// this is only useful to check whether twoSum is possible or not
// if we also want the indices, then we need to us extra space like hashMap

string twoSum(int a[], int n, int target){
    sort(a,a+n);
    int left = 0;
    int right = n-1;
    while(left<right){
        if(a[left] + a[right] < target){
            left++;
        } else if(a[left] + a[right] > target){
            right--;
        } else{
            return "Yes";
        }            
    }
    return "No";
}
int main(){
    int n = 5;
    int target = 14;
    int arr[n] = {2,6,5,8,11}; // {2,5,6,8,11}
    cout<<twoSum(arr, n, target);
    return 0;
}