#include<iostream>
#include<vector>
using namespace std;
// avg case --> TC = O(logn) / worst case --> TC = O(n/2), SC = O(1)
bool search(vector<int>& a, int target){
    int n = a.size();
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (a[mid] == target)
            return true;
        if(a[low] == a[mid] && a[mid] == a[high]){
            low += 1;
            high -= 1;
            continue;
        }
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
    return false;
}
int main(){
    vector<int> arr = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int target = 3;
    cout<<search(arr, target);
    return 0;
}