#include<iostream>
#include<vector>
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

// TC = O(n), SC = O(1)
Node* deleteVal(Node* head, int val) {
    while(head && head->data == val){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    Node* temp = head;
    Node* prev = NULL;

    while(temp){
        if(temp->data == val){
            prev->next = temp->next;
            Node* del = temp;
            temp = temp->next;
            delete del;
        }
        else{
            prev = temp;
            temp = temp->next;
        }
    }
    return head;
}

int main(){
    vector<int> a = {3,6,5,3,4,7};
    Node* head = arrToLL(a);
    print(head);
    head = deleteVal(head,3);
    print(head);
    return 0;
}