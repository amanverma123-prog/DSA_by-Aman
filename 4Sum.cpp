#include<iostream>
#include<vector>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

// Brute Force --> TC = O(n^4), SC = O(n^2)
// vector<vector<int>> fourSum(vector<int> a, int n, int target){ // taget = 0
//     set<vector<int>> s;
//     for(int i = 0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             for(int k = j+1;j<n;j++){
//                 for(int l = k+1;l<n;l++){
//                     if((a[i]+a[j]+a[k]+a[l]) == target){
//                         vector<int> temp = {a[i],a[j],a[k],a[l]};
//                         sort(temp.begin(),temp.end());
//                         s.insert(temp);
//                     }
//                 }
//             }
//         }
//     }
//     vector<vector<int>> ans(s.begin(), s.end());
//     return ans;
// }

// Better approahc --> TC = O(n^3 *log(m)), SC = O(n^3)
// vector<vector<int>> fourSum(vector<int> a, int n, int target){ // target = 0
//     set<vector<int>> s;
//     for(int i = 0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             set<long long> hashSet;
//             for(int k = j+1;k<n;k++){
//                 long long fourth = target - (a[i] + a[j] + a[k]);
//                 if(hashSet.find(fourth) != hashSet.end()){
//                     vector<int> temp = {a[i],a[j],a[k],int(fourth)};
//                     sort(temp.begin(),temp.end());
//                     s.insert(temp);
//                 }
//                 hashSet.insert(a[k]);
//             }
//         }
//     }
//     vector<vector<int>> ans(s.begin(), s.end());
//     return ans;
// }

// Optimal Approach --> TC=O(nlogn, n^3), SC= O(1) excluding output
vector<vector<int>> fourSum(vector<int> a, int n, int target){ // target can be anything
    vector<vector<int>> ans;
    sort(a.begin(),a.end());
    for(int i = 0;i<n;i++){
        if(i>0 && a[i] == a[i-1]) continue;
        for(int j = i+1;j<n;j++){
            if(j>i+1 && a[j] == a[j-1]) continue;
            int k = j+1, l = n-1;
            while(k<l){
                long long sum = a[i]+a[j]+a[k]+a[l];
                if(sum < target) k++;
                else if(sum > target) l--;
                else{
                    vector<int> temp = {a[i],a[j],a[l],a[k]};
                    ans.push_back(temp);
                    k++;
                    l--;

                    while(k<l && a[k] == a[k-1]) k++;
                    while(k<l && a[l] == a[l+1]) l--;
                }
            }
        }
    }
    return ans;
}

int main(){
    int n = 14;
    int target = 8;
    vector<int> arr = {1,1,1,2,2,2,3,3,3,4,4,4,5,5};
    vector<vector<int>> res = fourSum(arr, n, target);
    for(auto v : res){
        for(auto x : v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}