#include<iostream>
using namespace std;
int findMaxConsecutiveOnes(int a[],int n){
    int count = 0,maxCount = 0;
    for(int i = 0;i<n;i++){
        if(a[i] == 1){
            count++;
            if(count > maxCount){
                maxCount = count;
            }
        } else
            count = 0;
    }
    return maxCount;
}
int main(){
    int n = 9;
    int arr[n] = {1,1,0,1,1,1,0,1,1};
    cout<<findMaxConsecutiveOnes(arr,n);
    return 0;
}