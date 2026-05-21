#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// TC = O(2^n), SC = O(n)
void sums(int idx, vector<int>& a, int n, int sum, vector<int>& ds){
    // base 
    if(idx >= n){
        ds.push_back(sum);
        return;
    }
    // take
    sum += a[idx];
    sums(idx+1, a, n, sum, ds);
    
    // not take
    sum -= a[idx];
    sums(idx+1, a, n, sum, ds);
}
vector<int> subsetSums(vector<int>& nums){
    vector<int> ds;
    sums(0, nums, nums.size(), 0, ds);
    return ds;
}
int main(){
    vector<int> a = {3,1,2};
    vector<int> res = subsetSums(a);
    
    sort(res.begin(), res.end());
    for(auto i : res){
        cout<<i<<" "<<endl;
    }
    return 0;
}