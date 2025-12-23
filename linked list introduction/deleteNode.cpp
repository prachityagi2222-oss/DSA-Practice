#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 * time complexity O(1)
 * space complexity O(1)
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        //getting pointer to the current variable
        ListNode* curr = node;
        //copying the next node's value to current node
        curr->val = curr->next->val;
        //skipping over the current node
        curr->next = curr->next->next;
    }
};