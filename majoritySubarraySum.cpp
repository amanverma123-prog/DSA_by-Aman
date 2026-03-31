#include<iostream>
#include<climits>
using namespace std;
// Better approach --> TC = O(n^2), SC = O(1)
// int maxSubArraySum(int a[], int n){
//     int maxSum = INT_MIN;;
//     for(int st = 0;st<n;st++){
//         int currSum = 0;
//         for(int end = st;end<n;end++){
//             currSum += a[end];
//             maxSum = max(currSum,maxSum);
//         }
//     }
//     return maxSum;
// }
// Optimal --> Kadane's Algorithm --> TC = O(n), SC = O(1)
int maxSubArraySum(int a[], int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i = 0;i<n;i++){
        currSum += a[i];
        maxSum = max(maxSum,currSum);
        if(currSum < 0) currSum = 0;
    }
    return maxSum;
}

// To return the indices from start to end of subarray
// pair<int,int> maxSubArraySum(int a[], int n){
//     int maxSum = INT_MIN;
//     int currSum = 0;
//     int ansStart = -1;
//     int ansEnd = -1;
//     int startMax = 0;
//     for(int i = 0;i<n;i++){
//         if(currSum == 0) startMax = i;
//         currSum += a[i];
//         if(currSum > maxSum){
//             maxSum = currSum;
//             ansStart = startMax;
//             ansEnd = i;
//         }
//         if(currSum < 0) currSum = 0;
//     }
//     return {ansStart,ansEnd};
// }
// int main(){
//     int n = 5;
//     int arr[n] = {-3,2,-1,5,-2};
//     pair<int,int> result = maxSubArraySum(arr,n);
//     cout<<result.first<<" "<<result.second;
//     return 0;
// }

int main(){
    int n = 5;
    int arr[n] = {-3,2,-1,5,-2};
    cout<<maxSubArraySum(arr,n);
    return 0;
}