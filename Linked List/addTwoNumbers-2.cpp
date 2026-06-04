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
Node* reverseLL(Node* head){
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
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

// TC = O(max(n, m)), SC = O(max(n, m)), Auxiliary Space: O(1)
Node* addTwoNumbers(Node* head1, Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* dummy = new Node(-1);
    Node* curr = dummy;

    int carry = 0;
    while(temp1 != NULL || temp2 != NULL || carry){
        int sum = carry;
        if(temp1){
            sum += temp1->data;
            temp1 = temp1->next;
        }
            
        if(temp2){
            sum += temp2->data;
            temp2 = temp2->next;
        } 
        carry = sum/10;
        curr->next = new Node(sum%10);
        curr = curr->next;
    }
    return dummy->next;
}
int main(){
    vector<int> a1 = {2,4,6};
    vector<int> a2 = {3,8,7};

    Node* head1 = arrToLL(a1);
    Node* head2 = arrToLL(a2);

    print(addTwoNumbers(head1, head2));
    return 0;
}