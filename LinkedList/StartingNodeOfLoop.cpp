// find the starting node of loop.
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
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

bool checkForLoop(Node* head) {
    if(head == NULL) {
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
        
        if(slow == fast) {
            return true;
        }
    }

    return false;

}

Node* startingPointOfLoop(Node* head) {
    if(head == NULL) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
        
        if(slow == fast) {
            slow = head;
            break;
        }
    }
    while(slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;

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
    // Creating cycle.
    fifth->next = third;
    if(checkForLoop(head)) {
        cout<<"Loop is present." << endl;
    }
    else {
        cout << "Loop is not present." << endl;
    }
    cout<< "The starting node of Loop is:" << startingPointOfLoop(head)->data << endl;

    return 0;

}