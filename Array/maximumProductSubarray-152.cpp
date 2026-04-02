#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// Brute Force --> TC = O(n^2), SC = O(1)
// int maxProductSubarray(vector<int>& a, int n){
//     int maxProduct = INT_MIN;
//     for(int i = 0;i<n;i++){
//         int product = 1;
//         for(int j = i;j<n;j++){
//             product *= a[j];
//             maxProduct = max(maxProduct, product);
//         }
//     }
//     return maxProduct;
// }

// Optimal --> TC = O(), SC = O()
int maxProductSubarray(vector<int>& a, int n){
    int maxProduct = INT_MIN;
    int prefix = 1;
    int suffix = 1;
    for(int i = 0;i<n;i++){
        if(prefix == 0) prefix = 1;
        if(suffix == 0) suffix = 1;

        prefix *= a[i];
        suffix *= a[n-i-1];

        maxProduct = max(maxProduct, max(prefix, suffix));
    }
    return maxProduct;
}

int main(){
    vector<int> arr = {2,3,-2,4};
    int n = arr.size();
    cout<<maxProductSubarray(arr, n);
    return 0;
}