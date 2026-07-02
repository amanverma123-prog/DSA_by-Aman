#include<iostream>
#include<vector>
#include<stack>
using namespace std;

stack<int> s1;
stack<int> s2;

void transfer() {
    while (!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
    }
}

void push(int x) {
    s1.push(x);
}
    
int pop() {
    if (s2.empty()) {
        transfer();
    }
    int ele = s2.top();
    s2.pop();
    return ele;
}
    
int peek() {
    if (s2.empty()) {
        transfer();
    }
    return s2.top();
}
    
bool isEmpty() {
    return s1.empty() && s2.empty();
}

void display() {
    if (isEmpty()) {
        cout << "Queue is Empty\n";
        return;
    }

    stack<int> temp1 = s1;
    stack<int> temp2 = s2;

    cout << "Queue: ";

    // Elements already in s2 are at the front.
    while (!temp2.empty()) {
        cout << temp2.top() << " ";
        temp2.pop();
    }

    // Reverse temp1 into another stack.
    stack<int> rev;
    while (!temp1.empty()) {
        rev.push(temp1.top());
        temp1.pop();
    }

    while (!rev.empty()) {
        cout << rev.top() << " ";
        rev.pop();
    }

    cout << endl;
}

int main(){
    push(10);
    push(7);
    push(6);
    display();
    cout << "Front: " << peek() << endl;
    cout<<"Popped: "<<pop()<<endl;
    cout<<"Popped: "<<pop()<<endl;
    
    push(3);
    push(5);
    display();

    cout << "Front: " << peek() << endl;

    return 0;
}