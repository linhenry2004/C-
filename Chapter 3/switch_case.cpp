#include <iostream>
using namespace std;

int main() {
    int a, b;
    char oper;
    cout << "Please input an operation: ";
    cin >> a >> oper >> b;
    switch(oper) {
        case '+':
            cout << "The result is " << a+b << endl;
            break;
        case '-':
            cout << "The result is " << a-b << endl;
            break;
        case '*':
            cout << "The result is " << a*b << endl;
            break;
        case '/':
            cout << "The result is " << (float)a/b << endl;
            break;
        default: 
            cout << "Calculation Failed" << endl;
    }

    return 0;
}