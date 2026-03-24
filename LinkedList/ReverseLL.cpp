#include <bits/stdc++.h>
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

    Node* temp = head; // new variable created.
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}

Node* reverse(Node* &prev, Node* &curr) {
    // base case.
    if(curr == NULL) {
        // LL reverse ho chuki.
        return prev;
    }
    // 1 case solve then recursive call.
    Node* forward = curr -> next;
    curr -> next = prev;
    // recursive call.
    return reverse(curr, forward);

}

int main() {

   // Node* head = new Node();
    // Creating nodes.
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* head = first;
    // Linking Nodes.
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    cout << "printing the linked list:" << endl;
    print(first);
    cout << endl;
    cout << "Linked List Reversed:" << endl;
    Node* prev = NULL;
    Node* curr = head;
    head = reverse(prev, curr);
    print(head);

    return 0;

}