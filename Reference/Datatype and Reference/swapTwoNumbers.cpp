#include <iostream>
using namespace std;

void swap_by_address(int *, int*);
void swap_by_reference(int &, int &);
void swap_by_value(int, int);

int main() {
    int x = 100, y = 200;
    x = 100;
    y = 200;
    cout << "Call by address\n";
    cout << "Before swapping...\n";
    cout << "x = " << x << ", y = " << y << endl;
    swap_by_value(x, y);
    cout << "After swapping...\n";
    cout << "x = " << x << ", y = " << y << endl;

    cout << "\n";

    x = 100;
    y = 200;
    cout << "Call by address\n";
    cout << "Before swapping...\n";
    cout << "x = " << x << ", y = " << y << endl;
    swap_by_address(&x, &y);
    cout << "After swapping...\n";
    cout << "x = " << x << ", y = " << y << endl;

    cout << "\n";
    
    x = 100;
    y = 200;
    cout << "Call by reference\n";
    cout << "Before swapping...\n";
    cout << "x = " << x << ", y = " << y << endl;
    swap_by_reference(x, y);
    cout << "After swapping...\n";
    cout << "x = " << x << ", y = " << y << endl;
}
void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swap_by_address(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap_by_reference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}