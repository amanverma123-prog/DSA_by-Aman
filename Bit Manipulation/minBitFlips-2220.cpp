#include <iostream>
#include <vector>
using namespace std;
// TC = O(log(start ^ goal)), SC = O(1)
int minBitFlips(int start, int goal){
    int ans = start ^ goal;

    int count = 0;
    while (ans > 0)    {
        ans = ans & (ans - 1);
        count++;
    }
    return count;
}
int main(){
    int start = 10;
    int goal = 7;
    cout << minBitFlips(start, goal);
    return 0;
}