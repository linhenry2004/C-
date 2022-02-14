#include <iostream>
#include <stdlib.h>
using namespace std;
#define NUM 100
class stack
{
public:
    stack();
    void push(int);
    int pop();
    void printStack();

private:
    int array[NUM];
    int top;
};

stack::stack()
{
    top = -1;
}

void stack::push(int n)
{
    if (top == NUM - 1)
    {
        cout << "stack is full!";
        exit(1);
    }
    array[++top] = n;
}

int stack::pop()
{
    if (top == -1)
    {
        cout << "stack is empty!!";
        exit(1);
    }
    return array[top--];
}

int eval(char *str)
{
    stack S1;
    char *p = str;
    while (*p)
    {
        if (*p >= '0' && *p <= '9')
        {
            S1.push(*p - '0');
        }
        else
        {
            switch (*p)
            {
            case '+':
                S1.push(S1.pop() + S1.pop());
                break;
            case '-':
                S1.push(S1.pop() - S1.pop());
                break;
            case '*':
                S1.push(S1.pop() * S1.pop());
                break;
            case '/':
                S1.push(S1.pop() / S1.pop());
                break;
            default:
                return -1;
            }
        }
        p++;
    }
    return S1.pop();
}

int main(void)
{
    char str[NUM];
    while (1)
    {
        cout << "Please insert a postfix order operator: ";
        cin >> str;
        cout << str << " = " << eval(str) << endl;
    }
    return 0;
}