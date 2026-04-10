// find previous smaller element.
// For each element in an array, find the previous smaller element to its left.
// If no such element exists, return -1.
//FIRST smaller element” mean? Just the first one you meet in that direction.

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(0);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    stack<int> st;
    st.push(-1);
    vector<int> ans(v.size());

    for(int i = 0; i < v.size(); i++) {
        int current = v[i];
        // apka answer stack me.
        while(st.top() >= current) {
            st.pop();

        }
        //chota element mil gaya ans store.
        ans[i] = st.top();
        // push kardo current element ko.
        st.push(current);

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