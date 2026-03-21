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
void insertAtHead(Node* &head,Node* &tail, int data) {
    if(head == NULL) { // condition when head and tail is null.
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step 1:
    Node* newNode = new Node(data);
    // step 2:
    newNode -> next = head;
    //step 3:
    head = newNode;

}
// I want to insert a node right at the tail of Linked List.
void insertAtTail(Node* &head,Node* &tail, int data) {

    if(head == NULL) { // condition when head and tail is null.
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step 1:
    Node* newNode = new Node(data);
    // step 2:
    tail -> next = newNode; // keep eye here.
    //step 3:
    tail = newNode;

}

int findLength(Node* &head ) {
    int len = 0;
    Node* temp = head;
    while(temp != NULL) {
        temp = temp->next;
        len++;
    }
    
    return len;

}

void insertAtPosition(int data, int position, Node* &head, Node* &tail) {
    if(head == NULL) {
        Node* newNode = new Node(data) ;
        head = newNode;
        tail = newNode;
        return;
    }
    // step1 : find the position: previous & current.
    if(position == 0) { // for inserting at 0th position.
        insertAtHead(head, tail, data);
        return;
    }
    int len = findLength(head);
    if(position >= len) { // for inserting at last position.
        insertAtTail(head, tail, data);
        return;
    }
    int i = 1;
    Node* prev = head;
    while(i < position) {
        prev = prev -> next;
        i++;
    }
    Node* curr = prev -> next;
    // step 2:
    Node* newNode = new Node(data);
    //step 3:
    newNode -> next = curr;
    // step 4:
    prev -> next = newNode;

}

void print(Node* &head) { 

    Node* temp = head; 
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}

int main() {

    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,20); 
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,50);
    insertAtTail(head,tail,90);
    insertAtTail(head,tail,77);
    print(head);
    cout << endl;
    insertAtPosition(101, 7, head, tail);
    cout << "number inserted at position:" << endl;
    print(head); 
    

    return 0;

}