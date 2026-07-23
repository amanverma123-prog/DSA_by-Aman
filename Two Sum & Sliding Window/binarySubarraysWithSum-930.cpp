#include<iostream>
#include<vector>
using namespace std;
// Brute Force --> TC = O(n^2), SC = O(1)
// int numSubarraysWithSum(vector<int>& nums, int goal) {
//     int n = nums.size();
//     int cnt = 0;
//     for (int i = 0; i < n; i++) {
//         int sum = 0;
//         for (int j = i; j < n; j++) {
//             sum += nums[j];
//             if (sum == goal)
//                 cnt++;
//         }
//     }
//     return cnt;
// }

// Optimal --> TC = O(2n), SC = O(1)
int sumLessEqualsGoal(vector<int>& nums, int goal) {
    if(goal < 0) return 0;
    int n = nums.size();
    int cnt = 0;
    int sum = 0;
    int l = 0, r = 0;
    while(r < n){
        sum += nums[r];
        while(sum > goal){
            sum -= nums[l];
            l++;
        }
        cnt += r-l+1;
        r++;
    }
    return cnt;
}
int numSubarraysWithSum(vector<int>& nums, int goal) { 
    return sumLessEqualsGoal(nums, goal) - sumLessEqualsGoal(nums, goal-1);
}
int main(){
    vector<int> a = {1,0,0,1,1,0};
    int goal = 2;
    cout<<numSubarraysWithSum(a, goal);
    return 0;
}