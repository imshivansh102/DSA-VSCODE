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
    while(temp != head) {
        temp = temp -> next;;
        len++;
    }
    return len;

}

int main() {
    // Creating Nodes of LL  .
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(40);
    // Connecting Nodes of LL  .
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;

    print(first);


    return 0;

}