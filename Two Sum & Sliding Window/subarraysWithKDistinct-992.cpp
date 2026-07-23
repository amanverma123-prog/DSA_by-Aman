#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
// Brute Force --> Tc = O(n^2), SC = O(n)
// int subarraysWithKDistinct(vector<int>& nums, int k) {
//     int n = nums.size();
//     int cnt = 0;
//     for(int i = 0;i<n;i++){
//         unordered_map<int, int> mp;
//         for(int j = i;j<n;j++){
//             mp[nums[j]]++;
//             if(mp.size() == k) cnt++;
//             else if(mp.size() > k) break;
//         }
//     }
//     return cnt;
// }

// Optimal --> Tc = O(4n), SC = O(2n)
int subarraysLessEqualsK(vector<int>& nums, int k) {
    int n = nums.size();
    int cnt = 0;
    int l = 0, r = 0;
    unordered_map<int, int> mp;
    while(r < n){
        mp[nums[r]]++;
        while(mp.size() > k){
            mp[nums[l]]--;
            if(mp[nums[l]] == 0){
                mp.erase(nums[l]);
            }
            l++;
        }
        cnt += (r-l+1);
        r++;
    }
    return cnt;
}
int subarraysWithKDistinct(vector<int>& nums, int k) {
    return subarraysLessEqualsK(nums, k) - subarraysLessEqualsK(nums, k-1);
}
int main(){
    vector<int> a = {1,2,1,2,3};
    int k = 2;
    cout<<subarraysWithKDistinct(a, k);
    return 0;
}