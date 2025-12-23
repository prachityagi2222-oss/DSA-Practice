#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x): data(x), next(NULL) {}
};



class LinkedList{
public:
    //class variables
    Node* head;
    int size;

    //constructor
    LinkedList(int val){
        head = new Node(val);
        size = 1;
    }

    //method to add a node
    void addNode(int val){
        Node* curr = head;

        while(curr->next != NULL){
            curr = curr->next;
        }

        Node* newNode = new Node(val);
        curr->next = newNode;
        size++;

    }

    /*sequential search
    time complexity O(N)
    space complexity O(1)*/
    int linearSearch(int val){
    Node* curr = head;
    int index = 0;
    while (curr->next != NULL){
        if (curr->data == val){
            return index;
        }
        curr = curr->next;        
    }
    return -1;


}
};
