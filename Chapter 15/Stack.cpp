#include <iostream>
#include <stdlib.h>
using namespace std;
#define NUM 100

class stack {
    public:
        stack();
        void push(int);
        int pop();
        void printStack();
    private: 
        int array[NUM];
        int top;
};

stack::stack() {
    top = -1;
}

void stack::push(int n) {
    if (top == NUM - 1) {
        cout << "stack is full!";
        exit(1);
    }
    array[++top] = n;
}
int stack::pop() {
    if(top == -1) {
        cout << "stack is empty!!";
        exit(1);
    }
    return array[top--];
}
void stack::printStack() {
    int i;
    if(top == -1) {
        cout << "stack is empty!!\n";
    } else {
        cout << "stack: ";
        for(i = top; i >= 0; i--) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
}

int main(void) {
    int choice = 0, n;
    stack S1;
    while (choice != -1) {
        cout << "1) push 2)pop 3) print stack(from top to bottom)\n";
        cin >> choice;
        switch(choice) {
            case 1: cout << "What do you want to push?";
                    cin >> n;
                    S1.push(n);
                    break;
            case 2: cout << S1.pop() << " was popped from stack\n";
                    break;
            case 3: S1.printStack();
                    break;
        }
    }
    return 0;
}