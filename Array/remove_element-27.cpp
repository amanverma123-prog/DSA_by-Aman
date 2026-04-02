#include<iostream>
using namespace std;
int removeElement(int a[],int n,int v){
    int j = 0;
    for(int i = 0;i<n;i++){
        if(a[i] != v){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }
    return j;
}
int main(){
    int n = 4;
    int val = 3;
    int arr[n] = {3,2,2,3};
    cout<<removeElement(arr,n,val);
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}