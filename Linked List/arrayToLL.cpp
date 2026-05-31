#include<iostream>
#include<vector>
using namespace std;

// Array to LL (TC = O(n) - Traversing)

class Node{ // Node of a LinkedList
    public:
    int data; // value
    Node* next;  // pointer to the next node (address of next node)

    Node(int data1, Node* next1){ // Constructor 1
        data = data1;
        next = next1;
    }

    Node(int data1){ // Constructor 2
        data = data1;
        next = nullptr;
    }
};

Node* arrToLL(vector<int> a){ // "We cannot return the whole LL, So we only return the Head"
    Node* head = new Node(a[0]);
    Node* mover = head;
    for(int i = 1;i<a.size();i++){
        Node* temp = new Node(a[i]);
        mover->next = temp;
        mover = temp; // or (mover = mover->next)
    }
    return head;
}

int main(){
    vector<int> a = {2,5,3,7};
    Node* head = arrToLL(a);
    cout<<head->data;
    return 0;
}