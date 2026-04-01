#include<iostream>
using namespace std;
void bubbleSort(int n,int a[]){
    int swap = 0; 
    for(int i = n-1;i>0;i--){
        int didSwap = 0;
        for(int j = 0;j<i;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                didSwap = 1;
                swap++;
            }
        }
        if(didSwap == 0){
            // cout<<"Array already sorted!\n";
            break;
        }
    }
    // cout<<"No. of Swaps : "<<swap<<"\n";
}
int main(){
    int num = 6;
    int arr[num] = {6,12,1,5,3,10};
    cout<<endl;
    bubbleSort(num,arr);
    cout<<"Sorted Array : ";
    for(int i = 0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}