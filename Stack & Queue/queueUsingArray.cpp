#include<iostream>
using namespace std;

const int size = 10;

int q[size];
int currSize = 0;
int front = -1;
int rear = -1;

// TC = O(1), SC = O(1)
void push(int x) {
    if(currSize == size){
        cout<<"Queue is full";
        return;
    }
    if(currSize == 0){
        front = 0;
        rear = 0;
    } else{
        rear = (rear+1)%size;
    }
    q[rear] = x;
    currSize += 1;
}
   
// TC = O(1), SC = O(1) 
int pop() {
    if(currSize == 0){
        cout<<"Queue is empty";
        return -1;
    }
    int ele = q[front];
    if(currSize == 1){
        front = -1;
        rear = -1;
    } else{
        front = (front+1)%size;
    }
    currSize -= 1;
    return ele;
}
 
// TC = O(1), SC = O(1)   
int peek() {
    if(currSize == 0){
        cout<<"Queue is empty";
        return -1;
    }
    return q[front];
}
  
// TC = O(1), SC = O(1)  
bool isEmpty() {
    return currSize == 0;
}

void display(){
    if(isEmpty()){
        cout<<"Queue is empty\n";
        return;
    }
    cout<<"Queue: ";
    int i = front;

    for(int cnt = currSize-1; cnt >= 0; cnt--){
        cout << q[i] << " ";
        i = (i + 1) % size;
    }
    cout<<endl;
}

int main(){
    push(10);
    push(20);
    display();

    cout<<"Peek: "<<peek()<<endl;
    cout<<"Popped: "<<pop()<<endl;

    push(70);

    display();

    return 0;
}