#include<iostream>
#include<vector>
#include<stack>
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

// Brute force --> TC = O(n), SC = O(n)
// bool isPalindrome(Node* head){
//     if(head == NULL) return false;
//     if(head->next == NULL) return true;    
//     stack<int> st;
//     Node* temp = head;
//     while(temp != NULL){
//         st.push(temp->data);
//         temp = temp->next;
//     }
//     temp = head;
//     while(temp != NULL){
//         if(temp->data != st.top())
//             return false;
//         else{
//             st.pop();
//             temp = temp->next;
//         }
//     }
//     return true;
// }

Node* reverseLL(Node* head){ // TC = O(n), SC = O(1)
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}
// Optimal Approach (Slow-Fast pointers) --> TC = O(n), SC = O(1)
bool isPalindrome(Node* head){
    if(head == NULL || head->next == NULL) return true;
    // step 1 : Slow-Fast Pointers
    Node* slow = head;
    Node* fast = head;
    
    while(fast->next != NULL && fast->next->next != NULL){ // TC = O(n)
        slow = slow->next;
        fast = fast->next->next;
    }
    // step 2: Reverese the LL
    Node* newhead = reverseLL(slow->next); // TC = O(n)
    // step 3: Compare first half with second half
    Node* first = head;
    Node* second = newhead;
    while(second != NULL){ // TC = O(n)
        if(first->data != second->data){
            reverseLL(newhead);
            return false;
        }
        first = first->next;
        second = second->next;
    }
    reverseLL(newhead);
    return true;
}
int main(){
    vector<int> a = {1,4,1,3};
    Node* head = arrToLL(a);
    // print(head);
    cout<<isPalindrome(head);
    return 0;
}