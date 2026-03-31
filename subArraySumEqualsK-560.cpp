#include<iostream>
#include<unordered_map>
using namespace std;
// Better/Brute Force --> TC = O(n^2), SC = O(1)
// int subArraySum(int a[], int n, int k){
//     int count = 0;
//     for(int i = 0;i<n;i++){
//         int sum = 0;
//         for(int j = i;j<n;j++){
//             sum += a[j];
//             if(sum == k) count++;
//         }
//     }
//     return count;
// }

// Optimal --> TC = O(n*logn), SC = O(n)
int subArraySum(int a[], int n, int k){
    unordered_map<int,int> mp;
    mp[0] = 1;
    int sum = 0, count = 0;
    for(int i = 0;i<n;i++){
        sum += a[i];
        int remove = sum - k;
        count += mp[remove];
        mp[sum] += 1;
    }
    return count;
}
int main(){
    int n = 10;
    int arr[n] = {1,2,3,-3,1,1,1,4,2,-3};
    int k = 3;
    cout<<subArraySum(arr,n,k);
    return 0;
}