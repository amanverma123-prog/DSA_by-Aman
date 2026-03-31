// #include<iostream>
// #include<vector>
// using namespace std;
// vector<vector<int>> spiralMatrix(vector<vector<int>> a){
//     int n = a.size(), m = a[0].size();
//     int left = 0, right = n-1;
//     int top = 0, bottom = m-1;
//     vector<vector<int>> ans;
//     while(left<right && top<bottom){
//         for(int i = left;i<=right;i++){
//             cout<<a[top][i]<<" ";
//         } top++;
//         // cout<<endl;
//         for(int i = top;i<=bottom;i++){
//             cout<<a[i][right]<<" ";
//         } right--;
//         // cout<<endl;
//         for(int i = right;i>=left;i--){
//             cout<<a[bottom][i]<<" ";
//         } bottom--;
//         // cout<<endl;
//         for(int i = bottom;i>=top;i--){
//             cout<<a[i][left]<<" ";
//         } left++;
//         // cout<<endl;
//     }
//     return a;
// }
// int main(){
//     vector<vector<int>> arr = {
//         {1,2,3,4},
//         {12,13,14,5},
//         {11,16,15,6},
//         {10,9,8,7}
//     };
//     int n = arr.size(), m = arr[0].size();
//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<m;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     vector<vector<int>> res = spiralMatrix(arr);
// }

// (only exist) - Optimal --> TC = O(n*m), SC = O(n*m) {just to store the result}
#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralMatrix(vector<vector<int>> a){
    int n = a.size(), m = a[0].size();
    int left = 0, right = m-1;
    int top = 0, bottom = n-1;
    vector<int> ans;
    while(left<=right && top<=bottom){
        for(int i = left;i<=right;i++){
            ans.push_back(a[top][i]);
        } 
        top++;
        for(int i = top;i<=bottom;i++){
            ans.push_back(a[i][right]);
        }
        right--;
        if(top <= bottom){
            for(int i = right;i>=left;i--){
            ans.push_back(a[bottom][i]);
        }
        bottom--;
        }
        if(left <= right){
            for(int i = bottom;i>=top;i--){
            ans.push_back(a[i][left]);
        }
        left++;
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> arr = {
        {1,2,3,4},
        {12,13,14,5},
        {11,16,15,6},
        {10,9,8,7}
    };
    int n = arr.size(), m = arr[0].size();
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    vector<int> res = spiralMatrix(arr);
    for(auto v : res){
        cout<<v<<" ";
    }
}