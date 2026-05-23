#include<iostream>
#include<vector>
using namespace std;
// Brute Force --> TC = O(n! x n), SC = O(n) (extra vector to map)
// void onePermute(vector<int> &ds, vector<vector<int>> &ans, vector<int> &freq, vector<int> nums){
//     if(ds.size() == nums.size()){
//         ans.push_back(ds);
//         return;
//     }

//     for(int i = 0;i<nums.size();i++){
//         if(!freq[i]){
//             ds.push_back(nums[i]);
//             freq[i] = 1;

//             onePermute(ds, ans, freq, nums);
//             freq[i] = 0;
//             ds.pop_back();
//         }
//     }
// }
// vector<vector<int>> permute(vector<int>& nums) {
//     vector<vector<int>> ans;
//     vector<int> ds;
//     vector<int> freq(nums.size(), 0);
//     onePermute(ds, ans, freq, nums);

//     return ans;
// }

// Optimal --> TC = O(n! x n), SC = O(1) (swapping in vector itself)
void onePermute(int idx, vector<vector<int>> &ans, vector<int> nums){
    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int i = idx;i<nums.size();i++){
        swap(nums[idx], nums[i]);
        onePermute(idx+1, ans, nums);
        swap(nums[idx], nums[i]);
    }
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> freq(nums.size(), 0);
    onePermute(0, ans, nums);

    return ans;
}
int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> res = permute(nums);
    for(auto i : res){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}