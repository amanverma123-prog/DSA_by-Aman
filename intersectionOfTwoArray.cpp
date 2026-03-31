#include<iostream>
#include<vector>
using namespace std;
// Brute Force
// void inters(vector<int> a1, vector<int> a2){
//     vector<int> visited(a2.size(),0);
//     vector<int> isec;
//     for(int i = 0;i<a1.size();i++){
//         for(int j = 0;j<a2.size();j++){
//             if(a1[i] == a2[j] && visited[j] == 0){
//                 isec.push_back(a1[i]);
//                 visited[j] = 1;
//                 break;
//             }
//             if(a1[i] < a2[j]) break;
//         }
//     }
//     for(auto it : isec){
//         cout<<it<<" ";
//     }
// }
// int main(){
//     vector<int> arr1 = {1,2,2,3,3,4,5,6};
//     vector<int> arr2 = {2,3,3,5,6,6,7};
//     inters(arr1,arr2);
//     return 0;
// }

// Optimal

void inters(vector<int> a, vector<int> b){
    int n = a.size();
    int m = b.size();
    int i = 0, j = 0;
    vector<int> isec;
    while(i<n && j<m){
        if(a[i] == b[j]){
            isec.push_back(a[i]);
            i++;
            j++;
        }
        else if(b[j] > a[i]){
            i++;
        } else{
            j++;
        }
    }
    for(auto x : isec){
        cout<<x<<" ";
    }
}
int main(){
    vector<int> arr1 = {1,2,2,3,3,4,5,6};
    vector<int> arr2 = {2,3,3,5,6,6,7};
    inters(arr1,arr2);
    return 0;
}