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
// Node *detectCycle(Node *head){
//     unordered_map<Node*, int> mp;
//     Node* temp = head;
//     while(temp){
//         if(mp.find(temp) != mp.end()){
//             return temp;
//         }
//         mp[temp]++;
//         temp = temp->next;
//     }
//     return NULL;
// }

// Optimal --> TC = O(n), SC = O(1)
Node *detectCycle(Node *head){
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
    return NULL;
}
int main(){
    vector<int> a = {3,2,0,-4};
    Node* head = arrToLL(a);
    print(head);
    head = detectCycle(head);
    print(head);
    return 0;
}