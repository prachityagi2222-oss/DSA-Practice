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
    /*method 1: moving the whole nodes around
    time complexity O(n2)
    space complexity 
    */
    ListNode* reverseList1(ListNode* head) {
        if (!head) return nullptr;   // handle empty list
        int n = len(head);
        ListNode* curr = head;
        for (int i = 0; i < n; i++) {
            add(head, curr);         // pass head explicitly
            removeNode(head, curr);  // renamed from delete
            curr = curr->next;
        }
        return head;                 // must return a ListNode*
    }

    // method to get size of list
    int len(ListNode* head) {
        if (!head) return 0;
        int count = 1;
        ListNode* current = head;
        while (current->next != nullptr) {
            current = current->next;
            count++;
        }
        return count;
    }
    
    // method to add at the end of linked list
    void add(ListNode* head, ListNode* node) {
        ListNode* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = node;
    }

    // method to delete current node 
    void removeNode(ListNode* head, ListNode* node) {
        if (node->next != nullptr) {
            node->val = node->next->val;
            node->next = node->next->next;
        }
    }

    /*method 2: changing the nodes' next 
    time complexity O(N)
    space complexity O(1)*/
    ListNode* reverseList2(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextNode = curr->next; // save next
            curr->next = prev;               // reverse pointer
            prev = curr;                     // move prev forward
            curr = nextNode;                 // move curr forward
        }
        return prev; // new head
    }
};
