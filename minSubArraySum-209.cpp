#include<iostream>
#include<climits>
using namespace std;
int minSubArraySum(int a[], int n, int k){
    int i = 0;
    int sum = 0;
    int minLen = INT_MAX;
    for(int j = 0;j<n;j++){
        sum += a[j];

        while(sum >= k){
            minLen = min(minLen, j-i+1);
            sum -= a[i];
            i++;
        }
    }
        if(minLen == INT_MAX)
            return 0;
    return minLen;
}
int main(){
    int n = 10;
    int k = 6;
    int arr[n] = {1,2,3,1,1,1,1,4,2,3};
    cout<<minSubArraySum(arr, n ,k);
    return 0;
}