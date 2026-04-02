<<<<<<< HEAD
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Optimal --> TC = O(nlogn + n), SC = O(n)
vector<vector<int>> mergeIntervals(vector<vector<int>>& a,int n){
    sort(a.begin(),a.end());
    vector<vector<int>> ans;
    for(int i = 0;i<n;i++){
        if(ans.empty() || a[i][0] > ans.back()[1]){
            ans.push_back(a[i]);
        } else{
            ans.back()[1] = max(ans.back()[1], a[i][1]);
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> arr = {{1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};
    int n = arr.size();
    vector<vector<int>> res = mergeIntervals(arr, n);
    for(auto &val : res){
        cout<<"["<<val[0]<<","<<val[1]<<"] ";
    }
    return 0;
=======
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Optimal --> TC = O(nlogn + n), SC = O(n)
vector<vector<int>> mergeIntervals(vector<vector<int>>& a,int n){
    sort(a.begin(),a.end());
    vector<vector<int>> ans;
    for(int i = 0;i<n;i++){
        if(ans.empty() || a[i][0] > ans.back()[1]){
            ans.push_back(a[i]);
        } else{
            ans.back()[1] = max(ans.back()[1], a[i][1]);
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> arr = {{1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};
    int n = arr.size();
    vector<vector<int>> res = mergeIntervals(arr, n);
    for(auto &val : res){
        cout<<"["<<val[0]<<","<<val[1]<<"] ";
    }
    return 0;
>>>>>>> 205f622 (Organized files into Arrays folder)
}