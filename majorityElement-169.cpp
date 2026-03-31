#include<iostream>
#include<vector>
#include<map>
using namespace std;
// Brute --> TC = O(n^2), SC = O(1)
// Better --> TC = O(nlogn), SC = O(n)
// int majorityElement(vector<int> a){
//     map<int,int> mp;
//     for(int i = 0;i<a.size();i++){
//         mp[a[i]]++;
//         if(mp[a[i]] > (a.size()/2)) return a[i];
//     }
//     return -1;
// }
// int main(){
//     vector<int> arr = {2,2,1,2,3,2,3,1,2};
//     cout<<majorityElement(arr);
//     return 0;
// }

// Optimal --> Moore's Voting Algo --> TC = O(n), SC = O(1)
int majorityElement(int a[], int n){
    int count = 0;
    int i = 0;
    int ele;
    for(int i = 0;i<n;i++){
        if(count == 0){
            count = 1;
            ele = a[i];
        } else if(a[i] == ele){
            count++;
        } else{
            count--;
        }
    }
    int freq = 0;
    for(int i = 0;i<n;i++){
        if(a[i] == ele) freq++;
    }
    if(freq > (n/2)) return ele;
    return -1;
}
int main(){
    int n = 9;
    int arr[n] = {2,2,1,2,3,2,3,1,2};
    cout<<majorityElement(arr,n);
    return 0;
}