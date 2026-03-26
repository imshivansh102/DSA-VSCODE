// check Linked List is Palindrome or not.

#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data) {
        this->data =  data;
        this->next = NULL;
    }
};

void print(Node* head) { // always do this by using temp doing directly is too dangerous.
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;

    while(curr != NULL) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }

    return prev;

}

bool checkPalindrome(Node* head) {
    if(head == NULL) {
        cout << "LL is empty:"<< endl;
        return true;
    }
    if(head->next == NULL) {
        // There is only one node.
        return true;
    }
    // Now LL is >1.
    // Step 1: find the middle Node.
    // for this we use slow & fast pointer approach.
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }
    
    // slow is pointing to middle.
    // Step 2: reverse LL after middle node.
    Node* reverseLLkaHead = reverse(slow->next);

    // Step 3: Join reverse LL in the left part.
    slow->next = reverseLLkaHead;

    // Step 4: start comparision of left part to right part.
    Node* temp1 = head;
    Node* temp2 = reverseLLkaHead;

    while(temp2 != NULL) {
        if(temp1->data != temp2->data) {
            // Not a palindrome.
            return false;
        }
        else {
            // if data is equal move forward .
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    return true;

}

int main() {

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(5);
    Node* fourth = new Node(2);
    Node* fifth = new Node(1);
    // Node* sixth = new Node(1);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    // fifth->next = sixth;
    print(head);
    cout << endl;

    bool isPalindrome = checkPalindrome(head);

    if(isPalindrome) {
        cout << "It is Palindrome." << endl;
    }
    else {
        cout << "Not a Palindrome." << endl;
    }
    
    return 0;

}