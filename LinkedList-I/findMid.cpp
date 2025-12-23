#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int n = findLength(head);
        ListNode* curr = head;
        for(int i = 0; i< n/2; i++){
            curr = curr->next;
        }
        return curr;
    }
    int findLength(ListNode* head){
        ListNode* curr = head;
        int count = 1;
        while(curr->next != NULL){
            curr = curr->next;
            count++;
        }
        return count;
    }
};