/*creating a stack to solve the problem
1. create a stack
2. if the topmost element of teh stack is the matching bracket for teh current brakcet pop
    else push
3. if all the stack becomes empty then it was valid, else invalid
time complexity O(n)
space complexity O(n)*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int size = 10000;
    int top = -1;
    char stack[10000];

    bool isValid(string s) {
        int n = s.size();
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            // check closing brackets
            if ((ch == ')' && peep() == '(') ||
                (ch == '}' && peep() == '{') ||
                (ch == ']' && peep() == '[')) {
                pop();
            } else {
                push(ch);
            }
        }
        return isEmpty();
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }

    char peep() {
        if (!isEmpty()) {
            return stack[top];
        }
        return '\0'; // sentinel
    }

    void pop() {
        if (!isEmpty()) {
            top--;
        }
    }

    void push(char val) {
        if (!isFull()) {
            stack[++top] = val;
        }
    }
};
