#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Better Approach --> TC = O(nlogn), SC = O(1)
// int singleNumberII(vector<int> nums){
//     int n = nums.size();
//     sort(nums.begin(), nums.end());
//     for(int i = 1;i<n;i = i+3){
//         if(nums[i] != nums[i-1]){
//             return nums[i-1];
//         }
//     }
//     return nums[n-1];
// }

// Optimal --> TC = O(n), SC = O(1) (Concept of Buckets)
int singleNumberII(vector<int> nums){
    int ones = 0;
    int twos = 0;

    for(int i = 0;i<nums.size();i++){
        ones = (ones ^ nums[i]) & ~twos;
        twos = (twos ^ nums[i]) & ~ones;
    }
    return ones;
}
int main(){
    vector<int> nums = {0,1,0,1,0,1,99};
    cout<<singleNumberII(nums);
    return 0;
}