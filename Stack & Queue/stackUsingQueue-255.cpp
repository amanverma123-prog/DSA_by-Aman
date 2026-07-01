#include<iostream>
#include<queue>
using namespace std;

queue<int> q;

// TC = O(n), SC = O(1)
void push(int x) {
    int s = q.size();
    q.push(x);
    for(int i = 1;i<=s;i++){
        q.push(q.front());
        q.pop();
    }
}

// TC = O(1), SC = O(1)
int pop() {
    int ele = q.front();
    q.pop();
    return ele;
}

// TC = O(1), SC = O(1)
int top() {
    return q.front();
}

// TC = O(1), SC = O(1)
bool empty() {
    return q.size()==0;
}

void display(){
    if(empty()){
        cout<<"Queue is empty\n";
        return;
    }
    cout<<"Queue: ";
    queue<int> temp = q;
    while(!temp.empty()){
        cout<<temp.front() << " ";
        temp.pop();
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