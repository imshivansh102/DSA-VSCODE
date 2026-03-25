// find middle element of stack.

#include<bits/stdc++.h>
using namespace std;

void findMiddle(stack<int> &s, int &totalSize) {
    if(s.size() == 0) {
        cout << "There is no element in stack."<< endl;
        return;
    }
    // base case.
    if(s.size() == totalSize/2 + 1) { // s.size() is size of current stack. It changes after every round of recursion.
        cout << "Middle element is:"<< s.top() << endl;
        return;
    }
    int temp = s.top();
    s.pop();

    // recursive call.
    findMiddle(s, totalSize);
    // backtrack.
    s.push(temp);

}

int main() {

    stack<int> s;
   

    s.push(10);
    s.push(30);
    s.push(50);
    s.push(70);
    s.push(90);

    int totalSize = s.size();
    findMiddle(s, totalSize);



    return 0;

}