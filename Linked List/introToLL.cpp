#include<iostream>
#include<vector>
using namespace std;

// Creating a node

struct Node{ // Node of a LinkedList
    int data; // value
    Node* next;  // pointer to the next node (address of next node)

    Node(int data1, Node* next1){ // Constructor
        data = data1;
        next = next1;
    }
};

// int ifPresent(vector<int> a){
//     int data = ;
// }

int main(){
    vector<int> a = {2,5,3,7};
    Node* y = new Node(a[0], nullptr); // Creating a new node (address of this node stored in y)
    cout<<y;
    return 0;
}