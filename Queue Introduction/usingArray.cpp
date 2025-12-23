/* Implemented linear queue using array
time complexity of all methods is O(1)
space complexity is O(n)
limitation gives a flase ilusion tha the queue is fulll,when it is not.*/
class myQueue {
public:
    int front = 0;
    int rear = -1;
    int size = 1000;
    int queue[1000];   // moved out of constructor so it's a member

    myQueue(int n = 1000) {
        size = n;
        
    }

    bool isEmpty() {
        // queue is empty if rear < front
        return (rear < front);
    }

    bool isFull() {
        // queue is full if rear == size-1
        return (rear == size - 1);
    }

    void enqueue(int x) {
        if (isFull()) return;
        queue[++rear] = x;
    }

    void dequeue() {
        if (isEmpty()) return;
        front++;
    }

    int getFront() {
        if (isEmpty()) return -1;
        return queue[front];
    }

    int getRear() {
        if (isEmpty()) return -1;
        return queue[rear];
    }
};
