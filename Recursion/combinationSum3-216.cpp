#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// TC = O(2^n), SC = O(k)
void fun(int idx, int k, int target, vector<int>& ds, vector<vector<int>>& ans){
    // base case
    if(target == 0 && ds.size() == k){
        ans.push_back(ds);
        return;
    }
    // pruning
    if(target < 0 || ds.size() > k)
        return;
    for(int i = idx;i<=9;i++){
        if(i > target) break;
        ds.push_back(i);
        fun(i+1, k, target - i, ds, ans);

        // backtrack
        ds.pop_back();
    }
}
vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>> ans;
    vector<int> ds;

    fun(1, k, n, ds, ans);
    return ans;
}

int main(){
    int k = 3, n = 9;
    vector<vector<int>> res = combinationSum3(k, n);
    for(auto i : res){
        cout<<"[";
        for(auto j : i){
            cout<<j;
        }
        cout<<"]"<<endl;
    }
}