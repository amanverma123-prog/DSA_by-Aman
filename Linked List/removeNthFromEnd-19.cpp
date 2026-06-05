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

// Length of LL
int lengthOfLL(Node* head){
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt += 1;
        temp = temp->next;
    }
    return cnt;
}
// Brute Force --> TC = O(2n), SC = O(1)
// Node* removeNthFromEnd(Node* head, int n){
//     int len = lengthOfLL(head);
//     if (len == n){
//         Node* newNode = head->next;
//         delete head;
//         return newNode;
//     }
//     int res = len - n;
//     Node* temp = head;
//     int cnt = 0;
    
//     while (temp != NULL) {
//         cnt++;
//         if (cnt == res) {
//             if (temp->next) {
//                 Node* deleteNode = temp->next;
//                 temp->next = temp->next->next;
//                 delete deleteNode;
//                 return head;
//             }
//         }
//         temp = temp->next;
//     }
//     return head;
// }

// Optimal --> TC = O(n), SC = O(1)
Node* removeNthFromEnd(Node* head, int n){
    Node* fast = head;
    Node* slow = head;

    for(int i = 0;i<n;i++){
        fast = fast->next;
    }
    if(fast == NULL) 
        return head->next;
    while(fast->next != NULL){
        fast = fast->next;
        slow = slow->next;
    }
    Node* deleteNode = slow->next;
    slow->next = slow->next->next;
    delete deleteNode;
    return head;
}
int main(){
    vector<int> a = {1,2,3,4,5};
    Node* head = arrToLL(a);
    print(head);
    head = removeNthFromEnd(head, 2);
    print(head);
    return 0;
}