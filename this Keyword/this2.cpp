#include <iostream>
using namespace std;

class A {
    private: 
        int value;
    public: 
        A();
        A(int);
        void show();
        A larger(A &x);
};

A::A(int n) {
    value = n;
}

A::A() {
    value = 100;
}

void A::show() {
    cout << value;
}

A A::larger(A &x) {
    if (x.value >= value) {
        return x;
    } else { return *this; }
}

int main() {
    A a1(200), a2, max;
    max = a1.larger(a2);

    cout << "The larger of (" ; 
    a1.show();
    cout << ", "; 
    a1.show();
    cout << ")" << " is: ";
    max.show();
    cout << endl;
    return 0;
}