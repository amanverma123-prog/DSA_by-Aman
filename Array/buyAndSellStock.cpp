#include<iostream>
using namespace std;
int bestProfit(int a[], int n){
    int bestBuy = a[0];
    int maxProfit = 0;
    for(int i = 1;i<n;i++){
        if(a[i] > bestBuy){
            maxProfit = max(maxProfit,a[i]-bestBuy);
        }
        bestBuy = min(bestBuy,a[i]); // 1
    }
    if(maxProfit < 0) return 0;
    return maxProfit; // 5
}
int main(){
    int n = 6;
    int arr[n] = {7,1,5,3,6,4};
    cout<<bestProfit(arr,n);
    return 0;
}