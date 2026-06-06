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
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
int lengthOfLL(Node* head){ // TC = O(n), SC = O(1)
    Node* temp = head;
    int cnt = 0;
    while(temp){
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
// Brute force --> TC = O(n), SC = O(1)
// Node* middleNode(Node* head){
//     if(head->next == NULL)
//         return head;
    
//     Node* temp = head;
//     int len = lengthOfLL(head);
//     for(int i = 0;i<len/2;i++){ // TC = O(n/2), SC = O(1)
//         temp = temp->next;
//     }
//     return temp;
// }

// Optimal --> TC = O(n/2), SC = O(1)
Node* middleNode(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int main(){
    vector<int> a = {1,2,3,4,5};
    Node* head = arrToLL(a);
    // print(head);
    head = middleNode(head);
    print(head);
    return 0;
}