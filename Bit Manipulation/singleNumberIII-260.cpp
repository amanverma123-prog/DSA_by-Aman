#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// Brute Force --> TC = O(nlogm), SC = O(n)
// vector<int> singleNumber(vector<int> &nums){
//     vector<int> ans;
//     unordered_map<int, int> mp;
//     for (int i = 0; i < nums.size(); i++){
//         mp[nums[i]]++;
//     }
//     for (auto it : mp){  // O(m)
//         if (it.second == 1){
//             ans.push_back(it.first);
//         }
//     }
//     return ans;
// }

// Optimal --> TC = O(2n), SC = O(1)
vector<int> singleNumber(vector<int> &nums){
    long xorr = 0;
    for(int i = 0;i<nums.size();i++){
        xorr ^= nums[i];
    }
    long rightMost = (xorr & (xorr-1)) ^ xorr;

    int b1 = 0, b2 = 0;
    for(int i = 0;i<nums.size();i++){
        if(nums[i] & rightMost){
            b1 ^= nums[i];
        } else{
            b2 ^= nums[i];
        }
    }
    return {b1, b2};
}

int main(){
    vector<int> a = {1, 2, 1, 3, 2, 5};
    vector<int> res = singleNumber(a);
    for(int i = 0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}