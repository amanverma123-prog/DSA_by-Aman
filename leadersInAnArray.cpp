#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// brute force --> TC = O(n^2), SC = O(n)
// vector<int> leaders(vector<int> a){
//     vector<int> x;
//     int n = a.size();
//     for(int i = 0;i<n;i++){
//         bool leader = true;
//         for(int j = i+1;j<n;j++){
//             if(a[i] < a[j]){
//                 leader = false;
//                 break;
//             }
//         }
//         if(leader == true){
//             x.push_back(a[i]);
//         }
//     }
//     return x;
// }

// Optimal Approach --> TC = O(n), SC = O(n)
vector<int> leaders(vector<int> a){
    int n = a.size();
    int leader = a[n-1];
    vector<int> x = {leader};
    for(int i = n-2;i>=0;i--){
        if(a[i] >= leader){
            x.push_back(a[i]);
            leader = a[i];
        }
    }
    reverse(x.begin(), x.end());
    return x;
}
int main(){
    vector<int> arr = {10,22,12,3,0,6};
    vector<int> res = leaders(arr);
    for(auto v : res){
        cout<<v<<" ";
    }
    return 0;
}