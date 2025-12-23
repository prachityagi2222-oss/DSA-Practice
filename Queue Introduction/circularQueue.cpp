/* used %size to wrap around the array, to reuse space
time complexity of all operations O(1)
sapce complexity O(n)*/
#include <bits/stdc++.h>
using namespace std;

class MyCircularQueue {
public:
    int front, rear, size;
    int queue[1000];
    MyCircularQueue(int k) {
        size = k;
        front = -1;
        rear = -1;
    }
    
    bool enQueue(int value) {
        if (isFull()) return false;
        if (isEmpty()){
            front = 0;
            rear = 0;
        }
        else{
            rear = (rear + 1) % size;
        }
        queue[rear] = value;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) return false;
        if (front == rear){
            front = -1;
            rear = -1;
        }
        else{
            front = (front+1)%size;
        }
        return true;
        
    }
    
    int Front() {
        if (isEmpty()) return -1;
        return queue[front];
    }
    
    int Rear() {
        if (isEmpty()) return -1;
        return queue[rear];
    }
    
    bool isEmpty() {
        return (front == -1);
    }
    
    bool isFull() {
        return ((rear+1)%size == front);
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */