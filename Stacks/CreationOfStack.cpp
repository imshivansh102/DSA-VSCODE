#include<bits/stdc++.h>
using namespace std;

class Stack {
    public:
    int* arr;
    int top;
    int size;

    Stack(int size) {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // functions.

    void push(int data) {
        if(size - top > 1) {
            // space available.
            // insert.
            top++;
            arr[top] = data;

        }
        else {
            // space not available.
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {
        if(top == -1) {
            // stack is empty
            cout << "Stack underflow, can't delete elements" << endl;
        }
        else {
            // stack is not empty.
            top--;

        }
    }

    int getTop() {
        if(top == -1) {
            cout << "There is no element in stack." << endl;
        }
        else {
            return arr[top];
        }
    }
    //return number of valid elements present in stack.
    int getSize() {
        return top + 1;
    }

    bool isEmpty() {
        if(top == -1) {
            return true;
        }
        else {
            return false;
        }
    }

};

int main() {

    // Creation.
    Stack s(10);

    // insertion.
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while(!s.isEmpty()) { // It is way to show a Stack.
        cout << s.getTop() << " " << endl;
        s.pop();
    }

    cout << "size of stack " << s.getSize() << endl;


    return 0;
}