/*collison occurs when a right moving asteriod meets a left moving asteriod
asteriod with larger maganitude survies, smaller is destroyed, 
if equal both are destroyed
time complexity O(n)
sapce complexity O(1)*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> st;
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        push(asteroids[0]);
        for (int i = 1; i < n; i++){
            int a = asteroids[i];
            if(!st.empty() && a < 0 && peek() > 0){
                collide(a);
            }
            else{
                push(a);
            }
        }
        return st;
        
    }
    int peek(){
            return st.back();
        }
    int pop(){
        int last = st.back();
        st.pop_back();
        return last;
    }
    void push(int val){
        st.emplace_back(val);
    }
        
    void collide(int a){
        int b = pop();
        bool again = false;
        if (abs(a) > abs(b)) {
            if (!st.empty() && a < 0 && peek() > 0) again = true;
            push(a);
        }
        else if (abs(b) > abs(a)){
            if (!st.empty() && b < 0 && peek() > 0) again = true;
            push(b);
        }
        if (again) collide(pop());
    }
};