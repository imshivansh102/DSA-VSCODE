#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main() {
    // Creation.
    stack<int> st;
 
    // Insertion.
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // remove.
    st.pop();

    // Check element on top.
    cout << "Element on top is:" << st.top() << endl;

    // size.
    cout << "size of stack is:" << st.size() << endl;

    if(st.empty()) {
        cout << "stack is empty." << endl;
    }
    else {
        cout << "stack is not empty." << endl;
    }

    return 0;

}