#include <iostream>
using namespace std;

template <typename T>
class Queue {
    T arr[100];
    int front;
    int rear;
public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(T val) {
        if (rear >= 99) {
            cout << "Queue Overflow" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        arr[++rear] = val;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow" << endl;
            return;
        }
        cout << "Dequeued: " << arr[front++] << endl;
        
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
};

int main() {
    Queue<int> intQueue;
    intQueue.enqueue(10);
    intQueue.enqueue(20);
    intQueue.enqueue(30);
    intQueue.dequeue();
    intQueue.dequeue();

    cout << endl;

    Queue<double> doubleQueue;
    doubleQueue.enqueue(1.11);
    doubleQueue.enqueue(2.22);
    doubleQueue.dequeue();

    return 0;
}