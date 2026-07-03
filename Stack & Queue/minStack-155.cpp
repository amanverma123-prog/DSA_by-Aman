#include<iostream>
#include<stack>
#include<climits>
using namespace std;

// stack<pair<int, int>> st;

// // Burte Force --> TC = O(1), SC = O(2m)
// void push(int value) {
//     if (st.empty()) {
//         st.push({value, value});
//     } else {
//         st.push({value, min(value, st.top().second)});
//     }
// }

// void pop() {
//     if (st.empty())
//         return;
//     else {
//         st.pop();
//     }
// }

// int top() { return st.top().first; }

// int getMin() { return st.top().second; }

// void display() {
//     if (st.empty()) {
//         cout << "Stack is Empty\n";
//         return;
//     }

//     stack<pair<int, int>> temp = st;

//     cout << "Stack (Top to Bottom): ";

//     while (!temp.empty()) {
//         cout << temp.top().first<<" ";
//         temp.pop();
//     }

//     cout << endl;
// }

// Optimal --> TC = O(1), SC = O(n)
stack<int> st;
int mini = INT_MAX;

void push(int value) {
    if(st.empty()){
        st.push(value);
        mini = value;
    }
    else{
        if(value >= mini) st.push(value);
        else{
            st.push((2 * value) - mini);
            mini = value;
        }
    }
}

void pop() {
    if(st.empty()) return;
    int x = st.top();
    st.pop();
    if(x < mini) mini = (2 * mini) - x;
}

int top() {
    int x = st.top();
    if(x > mini) return x;
    return mini;
}

int getMin() { return mini; }

void display() {
    if (st.empty()) {
        cout << "Stack is Empty\n";
        return;
    }

    stack<int> temp = st;
    int currMin = mini;

    cout << "Stack (Top to Bottom): ";

    while (!temp.empty()) {
        int x = temp.top();

        if (x >= currMin) {
            cout << x << " ";
        } else {
            cout << currMin << " ";
            currMin = 2 * currMin - x;
        }

        temp.pop();
    }

    cout << endl;
}


int main(){
    push(12);
    push(15);
    push(10);
    
    display();
    cout<<"Min: "<<getMin()<<endl;
    
    pop();
    
    display();
    cout<<"Min: "<<getMin()<<endl;
    
    push(11);
    
    display();
    cout<<"Min: "<<getMin()<<endl;

    return 0;
}