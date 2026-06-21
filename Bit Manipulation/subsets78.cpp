#include <iostream>
#include <vector>
using namespace std;
// TC = O(n x 2^n), SC = O(1) (O/P SC = n x 2^n)
vector<vector<int>> subsets(vector<int> &nums){
    int n = nums.size();
    int totalSubsets = (1 << n);
    vector<vector<int>> ans;
    for (int num = 0; num < totalSubsets; num++){
        vector<int> singleSubset;
        for (int i = 0; i < n; i++){
            if (num & (1 << i)){
                singleSubset.push_back(nums[i]);
            }
        }
        ans.push_back(singleSubset);
    }
    return ans;
}
int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> res = subsets(nums);
    for(auto i : res){
        for(auto j : i){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}