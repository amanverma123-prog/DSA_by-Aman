#include<iostream>
#include<vector>
using namespace std;
// TC = O(2^n X n), SC = O(n)
void solve(int idx, vector<int>& nums, vector<int>& ds, vector<vector<int>>& ans){
    int n = nums.size();
    if(idx == n){
        ans.push_back(ds);
        return;
    }
    ds.push_back(nums[idx]);
    solve(idx+1, nums, ds, ans);
    ds.pop_back();
    solve(idx+1, nums, ds, ans);
}
vector<vector<int>> subsets(vector<int>& nums){
    vector<vector<int>> ans;
    vector<int> ds;
    solve(0, nums, ds, ans);

    return ans;
}
int main(){
    vector<int> nums = {3,1,2};
    vector<vector<int>> result = subsets(nums);
    for(auto subset : result){
        cout<<"{";
        for(auto s : subset){
            cout<<s;
        }
        cout<<"}"<<endl;
    }
    return 0;
}