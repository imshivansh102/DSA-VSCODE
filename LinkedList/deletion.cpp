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

    ~Node() {
        cout << "Destructor called:" << endl;
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
// I want to insert a node right at the tail of Linked List.
void insertAtTail(Node* &tail, int data) {
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

void deleteNode(int position, Node* &head, Node* &tail) {
    if(head == NULL) {
        cout << "Cannot delete, LL is empty";
        return;
    }
    // Deleting first node.
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
        return;

    }
    // deleting last node.
    int len = findLength(head);
    if(position == len) {
        // find previous.
        int i = 1;
        Node* prev = head;
        while(i < position - 1) {
            prev = prev -> next;
            i++;
        }
        // step 2:
        prev->next = NULL;
        // step 3:
        Node* temp = tail;
        // step 4:
        tail = prev;
        // step 5:
        delete temp;
        return;

    }
    // Deleting middle node.
    // step 1: find prev and curr.
    int i = 1;
    Node* prev = head;
    while(i < position - 1) {
        prev = prev -> next;
        i++;
    }
    Node* curr = prev -> next;

    // step 2:
    prev -> next = curr -> next;
    // step 3:
    curr -> next = NULL;
    // step 4:
    delete curr;

    return;

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
    Node* tail = head;
    insertAtHead(head,20); // this function call is for inserting.
    insertAtHead(head,30);
    insertAtHead(head,40);
    insertAtHead(head,50);
    insertAtTail(tail,90);
    print(head); // This is for printing.
    cout << endl;
    deleteNode(3, head, tail);
    print(head);
    

    return 0;

}