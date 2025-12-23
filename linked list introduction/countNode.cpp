#include <bits/stdc++.h>
using namespace std;


class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


/* iteratively going through every node
time complexity O(N)
space complexity O(1)*/
class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        Node* curr = head;
        int count = 1;
        while (curr->next != NULL){
            curr = curr->next;
            count++;
        }
        return count;
    }
};