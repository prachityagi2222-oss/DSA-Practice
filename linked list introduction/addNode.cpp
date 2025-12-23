#include <bits/stdc++.h>
using namespace std;

struct ListNode { 
    int val; 
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}  
};

class MyLinkedList {
public:

    ListNode* head;  // dummy head
    int size;

    MyLinkedList() {
        head = new ListNode(0);
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) return -1;
        ListNode* curr = head;
        for (int i = 0; i <= index; ++i) {
            curr = curr->next;
        }
        return curr->val;
    }

    void addAtHead(int val) {
        addAtIndex(0, val);
    }

    void addAtTail(int val) {
        addAtIndex(size, val);
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return;
        ListNode* curr = head;
        for (int i = 0; i < index; ++i) {
            curr = curr->next;
        }
        ListNode* node = new ListNode(val);
        node->next = curr->next;
        curr->next = node;
        ++size;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;  // fix boundary
        ListNode* curr = head;
        for (int i = 0; i < index; ++i) {
            curr = curr->next;
        }
        ListNode* toDelete = curr->next;
        curr->next = toDelete->next;
        --size;
    }

};
