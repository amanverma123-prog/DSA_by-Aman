#include <iostream>
#include <climits>
using namespace std;

int divide(int dividend, int divisor){

    if (dividend == divisor)
        return 1;

    bool sign = true; 
    if (dividend >= 0 && divisor < 0) sign = false; 
    if (dividend < 0 && divisor > 0) sign = false;

    long long n = llabs((long long)dividend);
    long long d = llabs((long long)divisor);

    long long quotient = 0;

    while (n >= d){
        int cnt = 0;
        while (n >= (d << (cnt + 1)))
            cnt++;

        quotient += (1LL << cnt);
        n -= (d << cnt);
    }

    if (quotient == (1LL << 31))
        return sign ? INT_MAX : INT_MIN;

    return sign ? quotient : -quotient;
}
int main(){
    int dividend = 30;
    int divisor = 3;
    cout << divide(dividend, divisor);
    return 0;
}