#include<iostream>
#include<vector>
#include<algorithm>
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
// Brute Force --> TC = O(nlogn), SC = O(n)
// Node* sortLL(Node* head){
//     vector<int> arr; // SC = O(n)
//     Node* temp = head;
//     while(temp){ // TC = O(n)
//         arr.push_back(temp->data);
//         temp = temp->next;
//     }

//     sort(arr.begin(), arr.end()); // TC = O(nlogn)

//     temp = head;
//     for(int i = 0;i<arr.size();i++){ // TC = O(n)
//         temp->data = arr[i];
//         temp = temp->next;
//     }
//     return head;
// }

// Optimal --> TC = O(nlogn), SC = O(logn)
Node* findMiddle(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node* merge(Node* left, Node* right){
    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;
    while(left && right){
        if(left->data < right->data){
            temp->next = left;
            temp = left;
            left = left->next;
        } else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }
    if(left) temp->next = left;
    else temp->next = right;
    return dummyNode->next;
}
Node* sortLL(Node* head){
    if(head == NULL || head->next == NULL)
        return head;

    Node* middle = findMiddle(head); // TC = O(logn)
    Node* leftHead = head;
    Node* rightHead = middle->next;
    middle->next = nullptr;
    
    leftHead = sortLL(leftHead); 
    rightHead = sortLL(rightHead);

    return merge(leftHead, rightHead);
}
int main(){
    vector<int> a = {4,2,1,3};
    Node* head = arrToLL(a);
    print(head);
    head = sortLL(head);
    print(head);
    return 0;
}