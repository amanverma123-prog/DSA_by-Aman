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
void printLL(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
// Time: O(1)
// Space: O(1) (one new node)
// Node* insertAtHead(Node* head, int ele){ // First Element
//     return new Node(ele, head);
// }

// Time: O(n)
// Space: O(1)
// Node* insertTail(Node* head, int ele){ // At the End of LL
//     if(head == NULL){
//         return new Node(ele);
//     }
//     Node* temp = head;
//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = new Node(ele);
//     return head;
// }

// Time: O(k) in the best interpretation, O(n) in the worst case.
// Space: O(1) extra space (excluding the new node).
// Node* insertAtK(Node* head, int ele, int k){ // At the End of LL
//     if(head == NULL){
//         if(k == 1) return new Node(ele);
//         return head;
//     }
//     if(k == 1){
//         Node* temp = new Node(ele);
//         temp->next = head;
//         return temp;
//     }
//     Node* temp = head;
//     int cnt = 0;
//     while(temp != NULL){
//         cnt++;
//         if(cnt == k-1){
//             Node* x = new Node(ele, temp->next);
//             temp->next = x;
//             break;
//         }
//         temp = temp->next;
//     }
//     return head;
// }
// Time = O(n)
// Space = O(1)
Node* insertBeforeVal(Node* head, int ele, int val){ // At the End of LL
    if(head == NULL)
        return NULL;

    if(head->data == val){
        return new Node(ele, head);
    }

    Node* temp = head;
    while(temp->next != NULL){
        if(temp->next->data == val){
            Node* x = new Node(ele, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main(){
    vector<int> a = {2,5,3,7};
    Node* head = arrToLL(a);
    printLL(head);
    head = insertBeforeVal(head, 100, 3);
    printLL(head);
    return 0;
}