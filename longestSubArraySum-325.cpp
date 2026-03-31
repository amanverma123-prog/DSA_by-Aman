#include<iostream>
using namespace std;
int longestSubArraySum(int a[], int n, int k){
    int i = 0, j = 0;
    int sum = 0;
    int maxLen = 0;
    while(j < n){
        sum += a[j];
        while(i <= j && sum > k){
            sum -= a[i];
            i++;
        }
        if(sum == k){
            maxLen = max(maxLen, j-i+1);
        }
        j++;
    }
    return maxLen;
}
int main(){
    int n = 10;
    int k = 6;
    int arr[n] = {1,2,3,1,1,1,1,4,2,3};
    cout<<longestSubArraySum(arr, n ,k);
    return 0;
}