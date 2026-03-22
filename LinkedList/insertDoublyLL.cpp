#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node() {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node* &head) { // For printing LL.
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp->next;
    }
}

int findLength(Node* head) { // For finding length of LL.
    int len = 0;
    Node* temp = head;
    while(temp != NULL) {
        temp = temp -> next;;
        len++;
    }
    return len;

}

void insertAtHead(Node* &head, Node* &tail, int data) {
    if(head == NULL) {// LL is empty.
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else { // LL is non-empty.
        //step 1:
        Node* newNode = new Node(data);
        // Step 2:
        newNode -> next = head;
        // Step 3:
        head -> prev = newNode;
        // Step 4:
        head = newNode;

    }
}
void insertAtTail(Node* &head, Node* &tail, int data) {
    if(head == NULL) {// LL is empty.
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else { // LL is non-empty.
        Node* newNode = new Node(data);
        tail -> next = newNode;
        newNode -> prev = tail;
        tail = newNode;

    }
}
void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
    if(position <= 0) {
        cout << "Invalid position" << endl;
        return;
    }
    if(head == NULL) {// LL is empty.
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else { // LL is not empty.
        if(position == 1) {
            insertAtHead(head, tail, data);
            return;
        }
        int len = findLength(head);
        if(position > len) {
            insertAtTail(head, tail, data);
            return;
        }
        // insertion in middle.
        // step 1: find prev && curr..
        int i = 1;
        Node* prevNode = head;
        while(i < position - 1) {
            prevNode = prevNode -> next;
            i++;
        }
        Node* curr = prevNode -> next;
        // Step 2: Create a Node.
        Node* newNode = new Node(data);
        // Step 3:
        prevNode -> next = newNode;
        newNode -> prev = prevNode;
        curr -> prev = newNode;
        newNode -> next = curr;

    }
}

int main() {
   
    // Creating Nodes of LL  .
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(40);
    Node* head = first;
    Node* tail = third;
    // Connecting Nodes of LL  .
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    print(first);
    cout << endl;

    insertAtHead(head, tail, 101);
    insertAtTail(head, tail, 501);
    

    print(head);
    cout << endl;
    insertAtPosition(head, tail, 301, 0);
    print(head);

    return 0;

}