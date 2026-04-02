#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
using namespace std;
// Brute force --> TC = O(n^2), SC = O(1)
// vector<int> majEle(vector<int> a, int n){
//     vector<int> ans;
//     for(int i = 0;i<n;i++){
//         bool found = false;
//         for(int v : ans){
//             if(v == a[i]){
//                 found = true;
//                 break;
//             }
//         }
//         if(found) continue;
//         int count = 0;
//         for(int j = 0;j<n;j++){
//             if(a[j] == a[i]){
//                 count++;
//             } 
//             if(count > n/3){
//                 ans.push_back(a[i]);
//                 break;
//             }
//         }
//     }
//     return ans;
// }

// Better --> TC = O(nlogn), SC = O(n)
// vector<int> majEle(vector<int> a, int n){
//     vector<int> ans;
//     unordered_map<int,int> mp;
//     for(int i = 0;i<n;i++){
//         mp[a[i]]++;
//         if(mp[a[i]] > n/3){
//             ans.push_back(a[i]);
//         }
//     }
//     return ans;
// }

// Optimal --> TC = O(2n), SC = O(1)
vector<int> majEle(vector<int> a, int n){
    int ele1 = INT_MIN, ele2 = INT_MIN;
    int count1 = 0, count2 = 0;
    for(int i = 0;i<n;i++){
        if(count1 == 0 && a[i] != ele2){
            ele1 = a[i];
            count1++;
        }
        else if(count2 == 0 && a[i] != ele1){
            ele2 = a[i];
            count2++;
        }
        else if(a[i] == ele1) count1++;
        else if(a[i] == ele2) count2++;
        else{
            count1--;
            count2--;
        }
    }
    vector<int> ans;
    count1 = 0;
    count2 = 0;
    // Manual Check
    for(int v : a){
        if(v == ele1) count1++;
        if(v == ele2) count2++;
    }
    if(count1 > n/3) ans.push_back(ele1);
    if(count2 > n/3) ans.push_back(ele2);
    return ans;
}
int main(){
    int n = 8;
    vector<int> arr={1,1,1,3,3,2,2,3};
    vector <int> res = majEle(arr,n);
    for(int i : res){
        cout<<i<<" ";
    }
    return 0;
}