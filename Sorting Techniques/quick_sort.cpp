#include<iostream>
using namespace std;
int partition(int arr[],int st,int end){
    int pivot = arr[end];
    int idx = st;
    for(int j = st;j<end;j++){
        if(arr[j]<=pivot){
            int temp = arr[idx];
            arr[idx] = arr[j];
            arr[j] = temp;
            idx++;
        }
    }
    int temp = arr[idx];
    arr[idx] = arr[end];
    arr[end] = temp;
    return idx;
}
void qs(int arr[],int st,int end){
    if(st<end){
        int pidx = partition(arr,st,end);
        qs(arr,st,pidx-1);
        qs(arr,pidx+1,end);
    }
}
int main(){
    int n = 7;
    int arr[n] = {4,6,2,5,7,9,1};
    qs(arr,0,n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}