// same question instead of next smaller element we have to return index of it.
// find next smaller element.
// For each element in an array, find the next smaller element to its right.
// If no such element exists, return -1.

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    stack<int> st;
    st.push(-1);
    vector<int> ans(v.size());

    for(int i = v.size() - 1; i >= 0; i--) {
        int current = v[i];
        // apka answer stack me.
        while(st.top() != -1 && v[st.top()] >= current) {
            st.pop();

        }
        //chota element mil gaya ans store.
        ans[i] = st.top();
        // push kardo current element ko.
        st.push(i);

    }
    
    cout << "Input Vector." << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "Printing array of answer." << endl;
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;

}