#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// TC = O(2^n * k), SC = O(k * x)
// k = avg lenth of combinations
// x = total combination
void findCombination(int idx, int target,vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds){
    if(target == 0){
        ans.push_back(ds);  // TC = O(k)
        return;
    }
    for(int i = idx; i<arr.size();i++){
        if(i>idx && arr[i] == arr[i-1]) continue;
        if(arr[i] > target) break;
        ds.push_back(arr[i]);
        findCombination(i+1, target - arr[i], arr, ans, ds);
        ds.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target){
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination(0, target, candidates, ans, ds);
    return ans;
}
int main(){
    vector<int> candidates = {1,1,1,2,2};
    int target = 4;
    vector<vector<int>> res = combinationSum2(candidates, target);

    for(auto i : res){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}