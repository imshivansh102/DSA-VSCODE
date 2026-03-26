// Remove duplicates from sorted Linked List.

#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Print Linked List
void print(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Remove duplicates from sorted LL
void removeDuplicates(Node* head) {

    if(head == NULL || head->next == NULL)
        return;

    Node* curr = head;

    while(curr != NULL && curr->next != NULL) {
        if(curr->data == curr->next->data) {
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;   // 🔥 important (avoids memory leak)
        }
        else {
            curr = curr->next;
        }
    }
}

int main() {

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(3);
    Node* fifth = new Node(5);
    Node* sixth = new Node(9);

    // Linking nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    cout << "Original Linked List: ";
    print(head);

    removeDuplicates(head);

    cout << "After Removing Duplicates: ";
    print(head);

    return 0;
}