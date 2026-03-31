#include<iostream>
#include<vector>
using namespace std;
bool sortRotated(vector<int> v){
    int n = v.size();
    int count = 0;
    for(int i = 0;i<v.size();i++){
        if(v[i] > v[(i+1)%n]){
            count++;
        }
    }
    return count <= 1;
}
int main(){
    vector <int> v = {2,1,3,4};
    cout<<sortRotated(v);
    return 0;
}