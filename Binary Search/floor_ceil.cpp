#include<iostream>
#include<vector>
using namespace std;
vector<int> getFloorAndCeil(vector<int>& a, int x) {
int n = a.size();
    vector<int> ans = {-1,-1};
    int low = 0, high = n-1;

    // Floor --> largest number in array <= x (closest from left)
    while(low <= high){
        int mid = low + (high - low)/2;
        if(a[mid] <= x){
            ans[0] = a[mid];
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }
    low = 0; high = n-1;
    // smallest number >= x (closest from right)
    while(low <= high){
        int mid = low + (high - low)/2;
        if(a[mid] >= x){
            ans[1] = a[mid];
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {10,20,30,40,50};
    int x = 25;
    vector<int> res = getFloorAndCeil(arr, x);
    // cout<<"Floor : "<<res[0]<<" Ceil : "<<res[1];
    for(auto v : res){
        cout<<v<<" ";
    }
    return 0;
}