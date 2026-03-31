//  LeetCode - 747
#include<iostream>
#include<vector>
using namespace std;
int largestTwice(vector<int> v){
    int largest = v[0];
    int idx;
    for(int i = 1;i<v.size();i++){
        if(v[i] > largest){
            largest = v[i];
            idx = i;
        }
    }
    for(int i = 0;i<v.size();i++){
        if(i == idx){
            continue;
        }
        else if(v[i] * 2 > largest){
            return -1;
        }
    }
    return idx;
}
int main(){
    vector <int> v= {1,2,3,4};
    cout<<largestTwice(v);
    return 0;
}