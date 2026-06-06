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
// Brute Force --> TC = O(n), SC = O(1)
// Node* deleteMiddle(Node* head) {
//     int len = lengthOfLL(head);
//     if (len == 1)
//         return NULL;
//     Node* temp = head;
//     for (int i = 0; i < (len / 2) - 1; i++) {
//         temp = temp->next;
//     }
//     Node* delNode = temp->next;
//     temp->next = temp->next->next;
//     delete delNode;
//     return head;
// }
// Optimal --> TC = O(n/2), SC = O(1)
Node* deleteMiddle(Node* head){
    if(head->next == NULL)
        return NULL;
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;
    while(fast != NULL && fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = prev->next->next;
    delete slow;
    return head;
}
int main(){
    vector<int> a = {1,3,4,7,1,2,6};
    Node* head = arrToLL(a);
    print(head);
    head = deleteMiddle(head);
    print(head);
    return 0;
}