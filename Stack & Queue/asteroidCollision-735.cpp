#include<iostream>
#include<vector>
using namespace std;
vector<int> asteroidCollision(vector<int>& asteroids) {
    vector<int> st;
    for (int i = 0; i < asteroids.size(); i++) {
        if (asteroids[i] > 0) {
            st.push_back(asteroids[i]);
        } else {
            while (!st.empty() && st.back() > 0 &&
                   st.back() < abs(asteroids[i])) {
                st.pop_back();
            }
            if (!st.empty() && st.back() == abs(asteroids[i])) {
                st.pop_back();
            } else if (st.empty() || st.back() < 0) {
                st.push_back(asteroids[i]);
            }
        }
    }
    return st;
}
int main(){
    vector<int> a = {3,5,-6,2,-1,4};
    vector<int> res = asteroidCollision(a);
    for(auto i : res){
        cout<<i<<" ";
    }
    return 0;
}