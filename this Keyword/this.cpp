#include <iostream>
using namespace std;

class A {
    private: 
        int value;
    public: 
        A();
        A(int);
        void show ();
};

A::A(int n) {
    this -> value = n;
}

A::A() {
    this -> value = 100;
}

void A::show() {
    cout << this->value << endl;
}

int main() {
    A a1(200), a2;
    cout << "The value of a1 is ";
    a1.show();
    cout << "The value of a2 is ";
    a2.show();
    getchar();
    return 0;
}