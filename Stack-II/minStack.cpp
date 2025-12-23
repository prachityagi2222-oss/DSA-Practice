/*Time complexity O(1)
space complexity O(n)*/
#include <bits/stdc++.h>
using namespace std;

class MinStack {
private:
    vector<int> st;       // main stack
    vector<int> minSt;    // stack to track minimums

public:
    MinStack() {}

    void push(int val) {
        st.push_back(val);
        if (minSt.empty() || val <= minSt.back()) {
            minSt.push_back(val);
        }
    }

    void pop() {
        if (st.empty()) return;
        if (st.back() == minSt.back()) {
            minSt.pop_back();
        }
        st.pop_back();
    }

    int top() {
        if (st.empty()) return -1;
        return st.back();
    }

    int getMin() {
        if (minSt.empty()) return -1;
        return minSt.back();
    }
};
