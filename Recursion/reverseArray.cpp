#include<iostream>
#include<vector>
using namespace std;
vector<int> rev(int i, int n, vector<int> a){
    if(i >= n/2){
        return a;
    }        
    swap(a[i], a[n-i-1]);
    return rev(i+1, n, a);
}
int main(){
    vector<int> a = {1,3,2,5,4};
    int n = a.size();
    vector<int> res = rev(0, n, a);
    for(int i : res){
        cout<<i<<" ";
    }
    return 0;
}
// vector<int> rev(int l, int r, vector<int> a){
//     if(l >= r){
//         return a;
//     }        
//     swap(a[l], a[r]);
//     return rev(l+1,r-1,a);
// }
// int main(){
//     vector<int> a = {1,3,2,5,4};
//     int n = a.size();
//     vector<int> res = rev(0,n-1, a);
//     for(int i : res){
//         cout<<i<<" ";
//     }
//     return 0;
// }