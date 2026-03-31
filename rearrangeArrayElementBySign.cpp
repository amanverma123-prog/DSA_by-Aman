#include<iostream>
#include<vector>
using namespace std;
// Brute Force --> TC = O(n) + O(n/2), SC = O(n)
// void reaarangeBySign(int a[], int n){
//     int pos[n/2];
//     int neg[n/2];
//     int pp = 0, nn = 0;
//     for(int i = 0;i<n;i++){
//         if(a[i] > 0){
//             pos[pp++] = a[i];
//         } else{
//             neg[nn++] = a[i];
//         }
//     }
//     for(int i = 0;i<n/2;i++){
//         a[i*2] = pos[i];
//         a[(i*2)+1] = neg[i];
//     }
//     for(int i = 0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
// }
// int main(){
//     int n = 6;
//     int arr[] = {3,1,-2,-5,2,-4};
//     reaarangeBySign(arr, n);
//     return 0;
// }

// Optimal --> TC = O(n), SC = O(n)
// void reaarangeBySign(vector<int> a, int n){
//     vector<int> ans(n,0);
//     int pos = 0, neg = 1;
//     for(int i = 0;i<n;i++){
//         if(a[i] > 0){
//             ans[pos] = a[i];
//             pos += 2;
//         } else{
//             ans[neg] = a[i];
//             neg += 2;
//         }
//     }
//     for(int i = 0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
// }
// int main(){
//     int n = 6;
//     vector<int> arr = {3,1,-2,-5,2,-4};
//     reaarangeBySign(arr, n);
//     return 0;
// }

void reaarangeBySign(vector<int> a, int n){
    vector<int> pos, neg;
    for(int i = 0;i<n;i++){
        if(a[i] > 0){
            pos.push_back(a[i]);
        } else{
            neg.push_back(a[i]);
        }
    }
    int nSize = neg.size();
    int pSize = pos.size();
    vector<int> temp(n,0);
    for(int i = 0;i<nSize;i++){
        temp[i*2] = neg[i];
        temp[(i*2)+1] = pos[i];
    }
    int k = pSize;
    for(int i = 2*nSize;i<n;i++){
        temp[i] = pos[k++];
    }
    for(auto val : temp){
        cout<<val<<" ";
    }
}
int main(){
    int n = 6;
    vector<int> arr = {-1,2,3,4,-3,1};
    reaarangeBySign(arr, n);
    return 0;
}