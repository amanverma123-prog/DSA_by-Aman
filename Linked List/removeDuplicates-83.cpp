#include<iostream>
#include<vector>
#include<climits>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
// Time: O(n)
// Space: O(n) (nodes created)
Node* arrToLL(vector<int> a){
    Node* head = new Node(a[0]);
    Node* mover = head;
    for(int i = 1;i<a.size();i++){
        Node* temp = new Node(a[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Time: O(n)
// Space: O(1)
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}


// Problem
// TC = O(n), SC = O(1)
Node* removeDuplictes(Node* head) {
    Node* temp = head;
    Node* prev = NULL;
    int x = INT_MIN;
    while(temp != NULL){
        if(temp->data == x){
            Node* nextNode = temp->next;
            prev->next = temp->next;
            delete temp;
            temp = nextNode;
        }
        else{
            x = temp->data;
            prev = temp;
            temp = temp->next;
        }
    }
    return head;
}

int main(){
    vector<int> a = {1,1,2,3,3};
    Node* head = arrToLL(a);
    print(head);
    head = removeDuplictes(head);
    print(head);
    return 0;
}