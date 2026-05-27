#include<iostream>
using namespace std;
// TC = O(logn), SC = O(logn)
int lastRemaining(int n) {

    if (n == 1)
        return 1;

    return 2 * (1 + n / 2 - lastRemaining(n / 2));
}
int main(){
    int n = 9;
    cout<<lastRemaining(n);
    return 0;
}