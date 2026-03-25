#include<bits/stdc++.h>
using namespace std;

class Stack {
    public:
    int* arr;
    int top1;
    int top2;
    int size;

    Stack(int size) {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    // functions.

    void push1(int data) {
        if(top2 - top1 == 1) {
            // space not available
            cout << "Overflow in stack 1" << endl;

        }
        else {
            // space available
            top1++;
            arr[top1] = data;
        }
    }

    void pop1() {
        if(top1 == -1) {
            // stack is empty
            cout << "Stack 1 underflow, can't delete elements" << endl;
        }
        else {
            // stack is not empty.
            arr[top1] = 0;
            top1--;

        }
    }

    void push2(int data) {
        if(top2 - top1 == 1) {
            // space not available
            cout << "Overflow in stack 2" << endl;

        }
        else {
            // space available
            top2--;
            arr[top2] = data;
        }
    }

    void pop2() {
        if(top2 == size) {
            // stack is empty
            cout << "Stack 2 underflow, can't delete elements" << endl;
        }
        else {
            // stack is not empty.
            arr[top2] = 0;
            top2++;

        }
    }

    void print() {
        cout << endl;
        for(int i= 0; i<size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl; 
    }
    
};

int main() {

    // Creation.
    Stack s(10);
    
    //  we can perform any function in this.

    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push1(40);
    s.push1(50);
    s.push2(10);
    s.push2(20);
    s.push2(30);
    s.push2(40);
    s.push2(50);
    
    s.print();


    return 0;
}