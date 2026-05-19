#include<iostream>
#include<vector>
using namespace std;
// TC = O(2^k × n), SC = O(k)
void solve(int i,
           vector<int>& ds,
           vector<vector<int>>& ans,
           vector<int>& candidates,
           int target,
           int n){
    // Base case
    if (target == 0){
        ans.push_back(ds);
        return;
    }
    if (i == n){
        return;
    }
    // Take
    if(candidates[i] <= target){
        ds.push_back(candidates[i]);
        // stay at same index
        solve(i, ds, ans, candidates,
              target - candidates[i], n);

        // backtrack
        ds.pop_back();
    }
    // Not take
    solve(i + 1, ds, ans, candidates, target, n);
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target){
    vector<vector<int>> ans;
    vector<int> ds;
    solve(0, ds, ans, candidates, target, candidates.size());
    return ans;
}
int main(){
    vector<int> candidates = {2,3,6,7};
    int target = 7;
    vector<vector<int>> result = combinationSum(candidates, target);
    for(auto subset : result){
        cout << "{ ";
        for(auto x : subset){
            cout << x << " ";
        }
        cout << "}" << endl;
    }
    return 0;
}