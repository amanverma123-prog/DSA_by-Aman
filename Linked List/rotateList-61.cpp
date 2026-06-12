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
Node* findNthNode(Node* temp, int n){
    int cnt = 1;
    while(temp){
        if(cnt == n) return temp;
        temp = temp->next;
        cnt++;
    }
    return temp;
}
Node* rotateList(Node* head, int k){
    if(head == NULL || k == 0) return head;
    Node* tail = head;
    int len = 1;
    while(tail->next){
        tail = tail->next;
        len++;
    }
    tail->next = head;
    k %= len;
    Node* temp = findNthNode(head, len-k);
    head = temp->next;
    temp->next = NULL;
    return head;
}
int main(){
    vector<int> a = {1,2,3,4,5};
    Node* head = arrToLL(a);
    print(head);
    head = rotateList(head, 2);
    print(head);
    return 0;
}