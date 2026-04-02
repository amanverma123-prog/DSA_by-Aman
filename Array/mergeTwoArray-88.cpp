#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute Force --> --> TC = O(n+m), SC = O(n+m)
// vector<int> mergeTwoArray(vector<int> &a1, vector<int> &a2, int n, int m){
//     vector<int> a3;
//     int i = 0, j = 0;
//     while(i<n && j<m){
//         if(a1[i] < a2[j]){
//             a3.push_back(a1[i]);
//             i++;
//         } else{
//             a3.push_back(a2[j]);
//             j++;
//         }
//     }
//     while(i<n){
//         a3.push_back(a1[i]);
//         i++;
//     }
//     while(j<m){
//         a3.push_back(a2[j]);
//         j++;
//     }
//     for(int i = 0;i<n+m;i++){
//         if(i<n) a1[i] = a3[i];
//         else a2[i-n] = a3[i];
//     }
//     return a3;
// }

// int main(){
//     int n = 4, m = 5;
//     vector<int> arr1 = {1,3,5,7};
//     vector<int> arr2 = {0,2,6,8,9};
//     vector<int> res = mergeTwoArray(arr1, arr2, n, m);
//     for(auto v : res){
//         cout<<v<<" ";
//     }
//     return 0;
// }

// Optimal Approach --> TC = O(n+m), SC = O(1)
vector<int> mergeTwoArray(vector<int> &a1, vector<int> &a2,int n,int m){
    a1.resize(n + m);
    int i = n - 1;
    int j = m - 1;
    int k = n + m - 1;

    while (i >= 0 && j >= 0) {
        if (a1[i] > a2[j]) {
            a1[k--] = a1[i--];
        } else {
            a1[k--] = a2[j--];
        }
    }

    while (j >= 0) {
        a1[k--] = a2[j--];
    }

    return a1;
}
int main(){
    vector<int> arr1 = {1,3,5,7};
    vector<int> arr2 = {0,2,6,8,9};
    
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res = mergeTwoArray(arr1, arr2, n, m);
    for(auto v : res){
        cout<<v<<" ";
    }
    return 0;
}