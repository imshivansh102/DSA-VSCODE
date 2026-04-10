// leetcode 84.
// we do it by using next smaller and previous smaller.

#include<bits/stdc++.h>
using namespace std;

vector<int> prevSmaller(vector<int> &v) {
    stack<int> st;
    st.push(-1);
    vector<int> ans(v.size());

    for(int i = 0; i < v.size(); i++) {
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
    return ans;
}

vector<int> nextSmaller(vector<int> &v) {
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
    
    return ans;

}
int getRectangularAreaHistogram(vector<int> &heights) {
    // step 1: previous smaller output.
    vector<int> prev = prevSmaller(heights);
    // step 2: nextSmaller call.
    vector<int> next = nextSmaller(heights);
    
    int maxArea = INT_MIN;
    int size = heights.size();

    for(int i=0; i<heights.size(); i++) {
        int length = heights[i];
        if(next[i] == -1) { // very inmportant point for answer.
            next[i] = size;
        }
        int width = next[i] - prev[i] - 1; // If no smaller on right → rectangle goes till end
        int area = length * width;
        maxArea = max(maxArea, area); 
  
    }

    return maxArea;

}

int main() {
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    cout << " Ans is:" << getRectangularAreaHistogram(v) << endl;

    return 0;

}