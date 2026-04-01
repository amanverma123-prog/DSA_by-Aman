#include<iostream>
using namespace std;
void insertionSort(int n,int arr[]){
    for(int i = 1;i<n;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            // swap
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}
int main(){
    int n = 6;
    int arr[n] = {6,12,1,5,3,10};
    insertionSort(n,arr);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}