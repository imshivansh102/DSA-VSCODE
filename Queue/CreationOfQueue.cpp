#include<bits/stdc++.h>
using namespace std;


class Queue {
    public:
    int* arr;
    int size;
    int front;
    int rear;
    
    Queue(int size) {
        this->size = size;
        arr = new int[size];
        
        front = 0;
        rear = -1;

    }
    // Add element.
    void enqueue(int data) {
        if(rear == size - 1) { // check if it is full.
            cout << "Queue is full,can't add."<< endl;
            return;
        }
        rear++;
        arr[rear] = data;
    }
    // Remove element.
    void dequeue() {
        if(front > rear) {
            cout << "Queue is empty." << endl;
            return;
        }
        front++;
    }
    // Get front element.
    int getfront() {
        if(front > rear) {
            cout << " Empty Queue." << endl;
            return -1;
        }
        return arr[front];
    }
    // Gat rear element.
    int getback() {
        if(front > rear) {
            cout << "There is no element." << endl;
            return -1;
        }
        return arr[rear];
    }
    int getsize() {
        return rear - front + 1;
    }
    bool isEmpty() {
        if(front > rear ) {
            return true;
        }
        else {
            return false;
        }
    }


};

int main() {
   
   Queue q(5);
   q.enqueue(2);
   q.enqueue(3);
   q.enqueue(4);
   q.enqueue(5);
   q.enqueue(6);

   cout << q.getfront() << endl;
   cout << q.getback() << endl;
   cout << q.getsize() << endl;

   while(!q.isEmpty()) {
        cout << q.getfront() << " ";
        q.dequeue();
   }

   return 0;

}