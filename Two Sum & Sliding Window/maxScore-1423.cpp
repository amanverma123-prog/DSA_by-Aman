#include<iostream>
#include<vector>
using namespace std;
// TC = O(2k), SC = O(1)
int maxScore(vector<int>& cardPoints, int k) {
    int n = cardPoints.size();
    long long lSum = 0, rSum = 0;
    long long maxSum = 0;

    for (int i = 0; i < k; i++) {
        lSum += cardPoints[i];
    }
    maxSum = lSum;
        
    int rIndex = n - 1;
    for (int i = k - 1; i >= 0; i--) {
        lSum -= cardPoints[i];
        rSum += cardPoints[rIndex];
        rIndex--;
        maxSum = max(maxSum, (lSum + rSum));
    }
    return maxSum;
}
int main(){
    vector<int> a = {1,2,3,4,5,6,1};
    int k = 3;
    cout<<maxScore(a, k);
    return 0;
}