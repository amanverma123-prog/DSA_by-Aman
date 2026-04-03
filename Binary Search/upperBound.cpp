#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// TC = O(logn), SC = O(1)
int upperBound(vector<int>& a, int x){
    int n = a.size();
    int ans = n;
    int low = 0, high = n-1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(a[mid] > x){
            ans = mid;
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {1,2,3,3,5,8,8,10,10,11};
    int n = arr.size();
    int x = 5;
    // int upperBound = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
    // cout<<upperBound;
    cout<<upperBound(arr, x);
    return 0;
}