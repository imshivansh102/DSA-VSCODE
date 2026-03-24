// Reverse LL in K groups.
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node() {
        this->data = data;
        this->next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int findLength(Node* &head) { // For finding length of LL.
    int len = 0;
    Node* temp = head;
    while(temp != NULL) {
        temp = temp -> next;;
        len++;
    }
    return len;

}

Node* ReverseKnodes(Node* &head, int k) {
    
    if(head == NULL) {
        return head;
    }
    int length = findLength(head);
    if(k > length) { // Enter the valid value for k.
        return head;
    }
    // it means number of nodes is >= k.
    // Step 1: reverse first k nodes of LL.
    Node* prev = NULL;
    Node* curr = head;
    Node* forward =curr->next;
    int count = 0;

    while(count < k) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;

    }
    // Step 2: recursive call.
    if(forward != NULL) {
        // we still have nodes to reverse.
        head->next = ReverseKnodes(forward, k); // for rest of LL forward is head.
    }
    // step 3: return head of the modified LL.
    return prev;

}

int main() {

    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);
    Node* fifth = new Node(60);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    print(head);
    cout << endl;
    cout<< "LL is reversed. "<< endl;
    head = ReverseKnodes(head, 4);

    print(head);

    return 0;

}