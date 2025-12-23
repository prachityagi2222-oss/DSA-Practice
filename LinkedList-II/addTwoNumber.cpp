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
    /*converts teh numebr into int and then stores it into a linked list
    time complexity O(n+m)
    space complexity O(k)*/
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //extracting number
        int num1 = getNum(l1);
        int num2 = getNum(l2);
        
        //reversing number
        num1 = reverseNum(num1);
        num2 = reverseNum(num2);
        
        //getting result     
        int result = (num1+num2);
        
        //adding result to linked list
        ListNode* head = nullptr;
        ListNode* current = nullptr;
        if (result == 0){
            head = new ListNode();
        }
        while(result > 0){
            ListNode* newNode = new ListNode(result%10);  // Use constructor
            if (head == nullptr) {
                head = newNode;
                current = newNode;
            } else {
                current->next = newNode;
                current = newNode;
            }
            result /= 10;
}

        
        return head;
        
    }

    //method to reverse teh number
    int reverseNum(int num){
        int newNum = 0;
        while(num > 0){
            int digit = num%10;
            newNum = newNum*10 + digit;
            num = num/10;
        }
        return newNum;
    }
    //method to extract the number from the list
    int getNum(ListNode* head){
        int num = 0;
        ListNode* curr = head;
        while(curr != nullptr){
            int digit = curr->val;
            num = num*10 + digit;
            curr = curr->next;
        }
        return num;
        
    }
};