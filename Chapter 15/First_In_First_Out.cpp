#include <iostream>
#include <stdlib.h>
using namespace std;
#define NUM 100
class queue {
    public: 
        queue();
        void enqueue(int);
        int dequeue();
        void printQueue();
    private: 
        int array[NUM];
        int rear;
        int front;
};

queue::queue() {
    rear = -1;
    front = -1;
}

void queue::enqueue(int n) {
    if (rear == NUM - 1) {
        cout << "Queue is full!";
        exit(1);
    }
    array[++rear] = n;
}

int queue::dequeue() {
    if(front == rear) {
        cout << "Queue is empty!!\n";
        exit(1);
    }
    return array[++front];
}

void queue::printQueue() {
    if(front == rear) {
        cout << "Queue is empty!!\n";
    } else {
        cout << "Queue: ";
        for (int i = rear; i >= front + 1; i--) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
}

int main(void) {
    int choice = 0, n;
    queue Q1;
    while (choice != -1) {
        cout << "1) enqueue 2) dequeue 3) print queue\n";
        cout << "enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: cout << "What do you want to enqueue? ";
                    cin >> n;
                    Q1.enqueue(n);
                    break;
            case 2: cout << Q1.dequeue() << " was dequeued from stack\n";
                    break;
            case 3: Q1.printQueue();
                    break;
        }
    }
}