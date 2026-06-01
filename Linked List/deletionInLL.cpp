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

Node* print(Node* head){
    while(head != NULL){
        cout<<head->data<<" "; // print the data from head pointer till the last
        head = head->next;
    }
    cout<<endl;
}

// Node* deleteHead(Node* head){ // First Element
//     if(head == NULL) return head;
//     Node* temp = head;
//     head = head->next;
//     delete temp;
//     return head;
// }
// Node* deleteTail(Node* head){ // Last element
//     if(head == NULL || head->next == NULL) return NULL;
//     Node* temp = head;
//     while(temp->next->next != NULL){
//         temp = temp->next;
//     }
//     delete temp->next;
//     temp->next = nullptr;
//     return head;
// }
// Node* deleteK(Node* head, int k){ // any element at K
//     if(head == NULL) return NULL;
//     if(k == 1){
//         Node* temp = head;
//         head = head->next;
//         delete(temp);
//         return head;
//     }
//     Node* temp = head;
//     Node* prev = NULL;
//     int cnt = 0;
//     while(temp != NULL){
//         cnt++;
//         if(cnt == k){
//             prev->next = temp->next;
//             delete(temp);
//             break;
//         }
//         prev = temp;
//         temp = temp->next;
//     }
//     return head;
// }

Node* deleteVal(Node* head, int val){ // any Node
    if(head == NULL) return NULL;
    if(head->data == val){
        Node* temp = head;
        head = head->next;
        delete(temp);
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        if(temp->data == val){
            prev->next = temp->next;
            delete(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> a = {2,5,3,7};
    Node* head = arrToLL(a);
    print(head);
    head = deleteVal(head,3);
    print(head);
    return 0;
}