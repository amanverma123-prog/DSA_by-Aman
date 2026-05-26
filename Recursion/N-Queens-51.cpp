#include<iostream>
#include<vector>
using namespace std;
// TC = O(n!), SC = O(n^2)
bool isSafe(int r, int c, vector<string> board, int n){
    int dupRow = r, dupCol = c;
    while(r >= 0 && c >= 0){
        if(board[r--][c--] == 'Q') return false;
    }
    r = dupRow;
    c = dupCol;
    while(c >= 0){
        if(board[r][c--] == 'Q') return false;
    }
    r = dupRow;
    c = dupCol;
    while(r < n && c >= 0){
        if(board[r++][c--] == 'Q') return false;
    }
    return true;
}
void solve(int col, vector<string>& board, vector<vector<string>>& ans, int n){
    // base case
    if(col == n){
        ans.push_back(board);
        return;
    }
    for(int row = 0;row<n;row++){
        if(isSafe(row, col, board, n)){
            board[row][col] = 'Q';
            solve(col+1, board, ans, n);
            // backtrack
            board[row][col] = '.';
        }
    }
}
vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '.');
    for(int i = 0;i<n;i++){
        board[i] = s;
    }
    solve(0, board, ans, n);
    return ans;
}
int main(){
    int n = 4;
    vector<vector<string>> res = solveNQueens(n);
    for(auto i : res){
        for(auto j : i){
            cout<<j<<" ";
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}