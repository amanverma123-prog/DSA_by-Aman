#include<iostream>
#include<vector>
using namespace std;

// Linear Searching -> LL ( best case -> TC = O(1) || worst case -> TC = O(n))

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

Node* arrToLL(vector<int> a){ // first we converted array to LL
    Node* head = new Node(a[0]);
    Node* mover = head;
    for(int i = 1;i<a.size();i++){
        Node* temp = new Node(a[i]);
        mover->next = temp;
        mover = temp; // or (mover = mover->next)
    }
    return head;
}

bool checkIfPresent(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val)
            return 1;
        temp = temp->next;
    }
    return 0;
}

int main(){
    vector<int> a = {2,5,3,7};
    Node* head = arrToLL(a);
    cout<<checkIfPresent(head, 4);
    return 0;
}