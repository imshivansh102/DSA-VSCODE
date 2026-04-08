// remove top element of stack and insert at bottom of same stack remove aonly one.
// target is top element .

#include<bits/stdc++.h>
using namespace std;

void solve(stack<int> &s, int target) {
    // base case.
    if(s.empty()) {
        s.push(target);
        return;
    }
    int topElement = s.top();
    s.pop();
    // recursive call.
    solve(s, target);

    // Back tracking.
    s.push(topElement);

}

void insertAtBottom(stack<int> &s) {
    if(s.empty()) {
        cout << "Stack is emppty, can't do."<< endl;
        return;
    }

    int target = s.top();
    s.pop();
    solve(s, target);

}

int main() {

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);


    insertAtBottom(s);

    cout << "Printing after "<< endl;
    while(!s.empty()) {
        cout << s.top() << " " << endl;
        s.pop();
    }
    cout << endl;

    return 0;

}