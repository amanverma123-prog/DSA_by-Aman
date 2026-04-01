#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int left = low;
    int right = mid+1;
    int k = 0;
    int temp[high - low + 1];
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp[k++] = arr[left++];
        }
        else{
            temp[k++] = arr[right++];
        }
    }
    while(left<=mid){
        temp[k++] = arr[left++];
    }
    while(right<=high){
        temp[k++] = arr[right++];
    }
    for(int i = low;i<=high;i++){
        arr[i] = temp[i-low];
    }    
}
void mergeSort(int arr[],int low,int high){
    if(low>=high) return;
        int mid = (low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
}  
int main(){
    int n = 5;
    int arr[n] = {3,1,5,4,2};
    int low = 0;
    int high = n-1;
    mergeSort(arr,low,high);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}