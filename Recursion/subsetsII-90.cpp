#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// TC = O(2ⁿ x n), SC = O(n)
void fun(int idx, vector<int>& nums, vector<vector<int>>& ans, vector<int>& ds){
    ans.push_back(ds);

    for(int i = idx;i<nums.size();i++){
        // base case
        if(i != idx && nums[i] == nums[i-1])
            continue;
        
        // take
        ds.push_back(nums[i]);

        fun(i+1, nums, ans, ds);
            
        // backtrack
        ds.pop_back();
    }
}
vector<vector<int>> subsets2(vector<int>& nums){
    vector<vector<int>> ans;
    vector<int> ds;
    
    sort(nums.begin(), nums.end());
    fun(0, nums, ans, ds);
    return ans;
}
int main(){
    vector<int> nums = {3,1,2};
    vector<vector<int>> res = subsets2(nums);
    
    for(auto i : res){
        cout<<"[";
        for(auto j : i){
            cout<<j;
        }
        cout<<"]"<<endl;
    }
    return 0;
}