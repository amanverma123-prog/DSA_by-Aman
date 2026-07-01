#include<iostream>
#include<vector>
using namespace std;
const int size = 10;

int st[size];
int topIdx = -1;

// TC = O(1), SC = O(1)
void push(int x) {
    if(topIdx == 9){
        cout<<"Array is full\n";
        return;
    }
    topIdx += 1;
    st[topIdx] = x;
}

// TC = O(1), SC = O(1)  
int pop() {
    if(topIdx == -1){
        return -1;
    }
    return st[topIdx--];
}

// TC = O(1), SC = O(1)
int top() {
    if(topIdx == -1){
        return -1;
    }
    return st[topIdx];
}

// TC = O(1), SC = O(1)  
bool isEmpty() {
    return topIdx == -1;
}

void display(){
    if(isEmpty()){
        cout<<"Stack is Empty\n";
        return;
    }
    cout<<"Stack: ";
    for(int i = 0;i<=topIdx;i++){
        cout<<st[i]<<" ";
    }
    cout<<endl;
}

int main(){
    push(10);
    push(20);
    display();

    cout<<"Top: "<<top()<<endl;
    cout<<"Popped: "<<pop()<<endl;

    push(70);

    display();

    return 0;
}