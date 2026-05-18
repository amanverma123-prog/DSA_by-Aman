#include<iostream>
#include<vector>
using namespace std;
// TC = O(2^n X n), SC = O(n)
void printF(int idx, int n, vector<int>& ds, vector<int> v){
    if(idx == n){
        for(auto i : ds){
            cout<<i;
        }
        if(ds.size() == 0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ds.push_back(v[idx]);
    printF(idx+1, n, ds, v);
    ds.pop_back();
    printF(idx+1, n, ds, v);    
}
int main(){
    vector<int> v = {3,1,2};
    int n = v.size();
    vector<int> ds;
    printF(0, n, ds, v);
    return 0;
}