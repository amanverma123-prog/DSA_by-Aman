#include<iostream>
using namespace std;
// ⏱ Time Complexity: O(n)

// 📦 Space Complexity: O(1)
int removeduplicates(int a[], int n){
    if(n <= 2) return n;
    int k = 2;
    for(int i = 2;i<n;i++){
        if(a[i] != a[k-2]){
            a[k] = a[i];
            k++;
        }
    }
    return k;
}
int main(){
    int n = 6;
    int arr[n] = {1,1,1,2,2,3};
    cout<<removeduplicates(arr,n);
    return 0;
}