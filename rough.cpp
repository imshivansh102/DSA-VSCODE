#include<bits/stdc++.h>
using namespace std;

int main(){
    
    stack <int> st;
    st.push(5);
    st.push(7);
    st.push(8);
    st.push(3);
    st.push(0);
    cout<<"The top element in stack is:"<< st.top() << endl;
    st.pop();
    cout<<"Now the top element in stack is:"<< st.top() << endl;
    cout <<"The size of the stack is:" << st.size() << endl;
    if(st.empty()){
        cout << "The stack is empty." << endl;
    }
    else{
        cout << "Stack is not empty." << endl;
    }
    cout << st.empty();

    return 0;

}