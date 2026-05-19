#include<iostream>
#include<vector>
using namespace std;
void printF(int i, vector<int>& ds, int sum, int k, vector<int>& v, int n){
    if( i == n){
        if(sum == k){
            for(auto it : ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    // take 
    ds.push_back(v[i]);
    sum += v[i];
    printF(i+1, ds, sum, k, v, n);
    
    // Backtrack
    ds.pop_back();
    sum -= v[i];

    // not take
    printF(i+1, ds, sum, k, v, n);
}
int main(){
    vector<int> v = {1,2,1};
    int k = 2;
    vector<int> ds;
    printF(0, ds, 0, k, v, v.size());
    return 0;
}