#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute force --> TC = O(n^2), SC = O(n^2)
// vector<vector<int>> rotateBy90(vector<vector<int>> a, int n){
//     vector<vector<int>> newM(n,vector<int>(n));
//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<n;j++){
//             newM[j][n-1-i] = a[i][j];
//         }
//     }
//     return newM;
// }

// Optimal Approach --> TC = O(n^2), SC = O(1)
vector<vector<int>> rotateBy90(vector<vector<int>> a, int n){
    // Swap part
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            swap(a[i][j], a[j][i]);
        }
    }
    // Reverse part
    for(int i = 0;i<n;i++){
            reverse(a[i].begin(),a[i].end());
    }
    return a;
}

int main(){
    vector<vector<int>> arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int n = arr.size();
    cout<<"Initial Matrix :"<<"\n";
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Final Matrix :"<<"\n";
    vector<vector<int>> res = rotateBy90(arr,n);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}