#include<iostream>
#include<vector>
#include<climits>
#include<queue>
using namespace std;
// Brute Force --> TC = O(n*k), SC = O(n-k)
// vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//     vector<int> ans;
//     int l = 0, r = k-1;
//     while(r<nums.size()){
//         int maxi = INT_MIN;
//         for(int i = l;i<=r;i++){
//             maxi = max(maxi, nums[i]);
//         }
//         ans.push_back(maxi);
//         l++;
//         r++;
//     }
//     return ans;
// }

// Optimal --> TC = O(2n), SC = O((n-k) + k)
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int> ans; // SC = O(n-k)
    deque<int> dq; // SC = O(k)

    for(int i = 0;i<nums.size();i++){
        if(!dq.empty() && dq.front() <= i-k) dq.pop_front();
        while(!dq.empty() && nums[dq.back()] <= nums[i]) dq.pop_back();

        dq.push_back(i);
        if(i >= k-1) ans.push_back(nums[dq.front()]);
    }
    return ans;
}
int main(){
    vector<int> a = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int> res = maxSlidingWindow(a, k);
    for(int i : res){
        cout<<i<<" ";
    }
    return 0;
}