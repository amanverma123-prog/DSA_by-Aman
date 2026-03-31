// #include<iostream>
// #include<vector>
// using namespace std;
// // Brute force --> TC = O(n^2), SC = O(1)
// int reversPairs(vector<int> &a, int n){
//     int count = 0;
//     for(int i = 0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             if(a[i] > 2*a[j]) count++;
//         }
//     }
//     return count;
// }
// int main(){
//     vector<int> arr = {42,25,19,12,9,6,2};    
//     int n = arr.size();
//     cout<<reversPairs(arr, n);
//     return 0;
// }

// Optimal --> TC = O(2nlogn), SC = O(n)

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
int countPairs(int arr[], int low, int mid, int high){
    int right = mid+1;
    int count = 0;
    for(int i = low;i<=mid;i++){
        while(right <= high && arr[i] > 2*(arr[right])) right++;
        count += (right - (mid+1));
    }
    return count;
}
int mergeSort(int arr[],int low,int high){
    int cnt = 0;
    if(low>=high) return cnt;
    int mid = (low+high)/2;
    cnt += mergeSort(arr,low,mid);
    cnt += mergeSort(arr,mid+1,high);
    cnt += countPairs(arr,low,mid,high);
    merge(arr,low,mid,high);
    return cnt;
}  
int main(){
    int n = 7;
    int arr[n] = {40,25,19,12,9,6,2};
    int low = 0;
    int high = n-1;
    cout<<mergeSort(arr,low,high);
    return 0;
}