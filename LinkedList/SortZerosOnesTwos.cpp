// Sort 0's, 1's, and 2's.When data modification is allowed.

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

void sortNumbers(Node* head) {
    int zeros = 0;
    int ones = 0;
    int twos = 0;

    Node* temp = head;
    // Step 1: count all Numbers.
    while(temp != NULL) {
        if(temp->data == 0) {
            zeros++;
        }
        if(temp->data == 1) {
            ones++;
        }
        if(temp->data == 2) {
            twos++;
        }

        temp = temp->next;

    }
    // Step 2: fill 0, 1 and 2 at places originally.
    temp = head;
    while(zeros--) {
        temp->data = 0;
        temp = temp->next;
    }
    while(ones--) {
        temp->data = 1;
        temp = temp->next;
    }
    while(twos--) {
        temp->data = 2;
        temp = temp->next;
    }

}

int main() {

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(0);
    Node* fifth = new Node(0);
    Node* sixth = new Node(0);

    // Linking nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    cout << "Original Linked List: ";
    print(head);

    sortNumbers(head);
    cout << "After sorting Numbers:";
    print(head);

    return 0;
}