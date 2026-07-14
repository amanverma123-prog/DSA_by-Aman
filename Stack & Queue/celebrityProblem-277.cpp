#include<iostream>
#include<vector>
using namespace std;
// Brute Force --> TC = O(n*n), SC = O(2n)
// int celebrity(vector<vector<int>> &M){
//     int n = M.size();
//     vector<int> km(n,0);
//     vector<int> ik(n,0);

//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<n;j++){
//             if(M[i][j] == 1){
//                 km[j]++;
//                 ik[i]++;
//             }
//         }
//     }
//     for(int i = 0;i<n;i++){
//         if((km[i] == n-1) && (ik[i] == 0)){
//             return i;
//         }
//     }
//     return -1;
// }

// Optimal --> TC = O(2n), SC = O(1)
int celebrity(vector<vector<int>> &M){
    int n = M.size();
    int top = 0, bottom = n-1;

    while(top < bottom){
        if(M[top][bottom] == 1) top++;
        else if(M[bottom][top] == 1) bottom--;
        else{
            top++;
            bottom--;
        }
    }
    if(top > bottom) return -1;
    for(int i = 0;i<n;i++){
        if(i == top) continue;
        if(M[top][i] != 0 || M[i][top] != 1) return -1;
    }
    return top;
}
int main(){
    vector<vector<int>> mat = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {1, 1, 0, 0},
        {0, 1, 1, 0}
    };

    cout<<celebrity(mat);
    return 0;
}