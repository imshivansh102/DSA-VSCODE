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

// I want to insert a node right at the head of Linked List.
void insertAtHead(Node* &head, int data) {
    // step 1:
    Node* newNode = new Node(data);
    // step 2:
    newNode -> next = head;
    //step 3:
    head = newNode;

}
void print(Node* &head) { // Traversal of Linked List.

    Node* temp = head; // new variable created.
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}

int main() {

    Node* head = new Node(10); // it is from starting.
    insertAtHead(head,20); // this function call is for inserting.
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);
    print(head); // This is for printing.

    return 0;

}