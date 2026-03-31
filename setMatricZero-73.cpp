#include<iostream>
#include<vector>
using namespace std;
// Brute force --> TC = O(n^3), SC = O(n+m)
// Better Approach --> TC = O(2*n*m), SC = O(n+m)
// vector<vector<int>> setMatricZero(vector<vector<int>> matrix ,int r,int c){
//     vector<int> row(r,0), col(c,0);
//     for(int i = 0;i<r;i++){
//         for(int j = 0;j<c;j++){
//             if(matrix[i][j] == 0){
//                 row[i] = 1;
//                 col[j] = 1;
//             }
//         }
//     }
//     for(int i = 0;i<r;i++){
//         for(int j = 0;j<c;j++){
//             if(row[i] == 1 || col[j] == 1){
//                 matrix[i][j] = 0;
//             }
//         }
//     }
//     return matrix;
// }

// Optimal --> TC = O(n*m), SC = O(1)
vector<vector<int>> setMatricZero(vector<vector<int>> matrix){
    bool fr = false, fc = false; // used as markers
    int r = matrix.size(),c = matrix[0].size();
    // Step 1
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(matrix[i][j] == 0){
                if(i == 0) fr = true;
                if(j == 0) fc = true;
                matrix[0][j] = 0;
                matrix[i][0] = 0;
            }
        }
    }
    // Step 2
    for(int i = 1;i<r;i++){
        for(int j = 1;j<c;j++){
            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }
    }
    // step 3
    if(fr){
        for(int j = 0;j<c;j++){
            matrix[0][j] = 0;
        }
    }
    if(fc){
        for(int i = 0;i<r;i++){
            matrix[i][0] = 0;
        }
    }
    return matrix;
}
int main(){
    vector<vector<int>> matrix = {{1,1,1,1},{1,0,1,1},{1,1,0,1},{1,0,0,1}};
    // Size :-
        // rows --> matrix.size()
        // columns --> matrix[i].size()
    int r = matrix.size(),c = matrix[0].size();
    vector<vector<int>> res = setMatricZero(matrix);
    // Intial Matrix
    cout<<"Initial Matrix :- "<<endl;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // Final Matrix
    cout<<"Final Matrix :- "<<endl;
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}