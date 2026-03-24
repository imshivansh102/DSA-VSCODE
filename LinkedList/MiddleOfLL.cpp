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

void print(Node* head) {

    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node* findMiddle(Node* head) {

    if(head == NULL) { // empty Linked list.
        return head;
    }
    if(head->next == NULL) { // Linked list have only one element.
        return head;
    }
    // if Linked list have more than 1 element.
    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
    }

    return slow;

}

int main() {

    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);
    // Node* fifth = new Node(60);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    // fourth->next = fifth;

    print(head);
    cout << endl;
    cout << "The middle of LL is:" << findMiddle(head)->data << endl;


    return 0;

}