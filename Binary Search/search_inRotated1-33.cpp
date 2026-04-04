#include<iostream>
#include<vector>
using namespace std;
// TC = O(logn), SC = O(1)
int search(vector<int>& a, int target){
    int n = a.size();
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == target)
            return mid;
        // left side is sorted
        if (a[low] <= a[mid]) {
            if (a[low] <= target && a[mid] >= target) {
                high = mid - 1;
            } else
                low = mid + 1;
        }
        // right side is sorted
        else {
            if (a[mid] <= target && a[high] >= target) {
                low = mid + 1;
            } else
                high = mid - 1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {7,8,9,1,2,3,4,5,6};
    int target = 1;
    cout<<search(arr, target);
    return 0;
}