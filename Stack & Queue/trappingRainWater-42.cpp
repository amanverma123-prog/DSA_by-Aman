#include <iostream>
#include <vector>
using namespace std;
// Brute force --> TC = O(3n), SC = O(2n)
// int trap(vector<int> &height){
//     int n = height.size();

//     vector<int> prefix(n); // SC = O(n)
//     prefix[0] = height[0];
//     for (int i = 1; i < n; i++){
//         prefix[i] = max(prefix[i - 1], height[i]);
//     }

//     vector<int> suffix(n);  // SC = O(n)
//     suffix[n - 1] = height[n - 1];
//     for (int i = n - 2; i >= 0; i--){
//         suffix[i] = max(suffix[i + 1], height[i]);
//     }

//     int total = 0;
//     for (int i = 0; i < n; i++){
//         int leftMax = prefix[i];
//         int rightMax = suffix[i];
//         if (leftMax > height[i] && rightMax > height[i]){
//             total += min(leftMax, rightMax) - height[i];
//         }
//     }
//     return total;
// }

// Optimal --> TC = O(n), SC = O(1)
int trap(vector<int> &height){
    int n = height.size();

    int l = 0, r = n-1;
    int total = 0;

    int leftmax = 0, rightmax = 0;

    while(l < r){
        leftmax = max(leftmax, height[l]);
        rightmax = max(rightmax, height[r]);

        if(leftmax < rightmax){
            total += leftmax - height[l];
            l++;
        } else{
            total += rightmax - height[r];
            r--;
        }
    }
    return total;
}
int main(){
    vector<int> heights = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(heights);
    return 0;
}