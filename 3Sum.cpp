#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<climits>
using namespace std;
// Brute force approach --> TC = O(n^3), SC = O(n)
// vector<vector<int>> threeSum(vector<int> a, int n){
//     set<vector<int>> s;
//         for(int i = 0;i<n;i++){
//             for(int j = i+1;j<n;j++){
//                 for(int k = j+1;k<n;k++){
//                     if((a[i] + a[j] + a[k]) == 0){
//                         vector<int> temp = {a[i], a[j], a[k]};
//                         sort(temp.begin(), temp.end());
//                         s.insert(temp);
//                     }
//                 }
//             }
//         }
//     vector<vector<int>> ans(s.begin(),s.end());
//     return ans;
// }

// Better approach --> TC = O(n^2), SC = O(n)
// vector<vector<int>> threeSum(vector<int> a, int n){
//     set<vector<int>> s;
//     for(int i = 0;i<n;i++){
//         set<int> hashSet;
//         for(int j = i+1;j<n;j++){
//             int third = -(a[i] + a[j]);
//             if(hashSet.find(third) != hashSet.end()){
//                 vector<int> temp ={a[i] , a[j], third};
//                 sort(temp.begin(), temp.end());
//                 s.insert(temp);
//             }
//             hashSet.insert(a[j]);
//         }
//     }
//     vector<vector<int>> ans(s.begin(), s.end());
//     return ans;
// }

// Optimal approach --> TC = O(nlogn + n^2), SC = O(1) {excluding output}
vector<vector<int>> threeSum(vector<int> a, int n){
    vector<vector<int>> ans;
    sort(a.begin(), a.end());

    for(int i = 0;i<n;i++){

        int j = i+1, k = n-1;

        if(i>0 && a[i] == a[i-1]) continue;

        while(j<k){
            int sum = a[i]+a[j]+a[k];

            if(sum < 0){
                j++;
            }
            else if(sum > 0){
                k--;
            }
            else{
                vector<int> temp = {a[i],a[j],a[k]};

                ans.push_back(temp);

                j++;
                k--;

                while(j<k && a[j] == a[j-1]) j++;
                while(j<k && a[k] == a[k+1]) k--;
            }
        }
    }
    return ans;
}

int main(){
    int n = 13;
    vector<int> arr = {-2,-2,-2,-1,-1,-1,0,0,0,2,2,2,2};
    vector<vector<int>> res = threeSum(arr,n);
    for(auto v : res){
        for(auto x : v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}