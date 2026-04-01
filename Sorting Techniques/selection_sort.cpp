#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n]; // = {13,34,25,9,21};
    for(int i = 0;i<n;i++){
        cout<<"Enter value in array : ";
        cin>>arr[i];
    }
    cout<<"Array before sorting : ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // Selection sort - 1) Select min  2) Swap
    // [13,34,25,9,21]
    // 1) Select the minimum
    for(int i = 0;i<n-1;i++){ // 13 to 9
        int min = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        // 2) Swap
        int temp = arr[i]; // 13
        arr[i] = arr[min];
        arr[min] = temp;
    }
    cout<<"\nArray after sorting : ";
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}