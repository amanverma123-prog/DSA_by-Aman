#include<iostream>
using namespace std;
bool powOf2(int n){
    while(n > 1 ){
        if(n <= 0) return false;
        if(n == 1) return true;

        if(n%2 != 0){
            return false;
        } else{
            n /= 2;
        }
    }
    return true;
}
int main(){
    int n = 16;
    cout<<powOf2(n);
    return 0;
}