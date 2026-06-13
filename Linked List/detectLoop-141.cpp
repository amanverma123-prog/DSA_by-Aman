#include<iostream>
#include<vector>
#include<unordered_map>
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
// Brute Force --> TC = O(n), SC = O(n)
// bool hasCycle(Node* head) {
//     unordered_map<Node*, int> mp;
//     Node* temp = head;
//     while (temp) {
//         if (mp.find(temp) != mp.end())
//             return true;
//         mp[temp]++;
//         temp = temp->next;
//     }
//     return false;
// }

// Optimal --> TC = O(n), SC = O(1)
bool hasCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
            return true;
    }
    return false;
}
int main(){
    vector<int> a = {1,2,3,4,5};
    Node* head = arrToLL(a);
    Node* temp = head;
    // Loop 
    while(temp->next){
        temp = temp->next;
    }
    temp->next = head;
    cout<<hasCycle(head);
    return 0;
}