#include <iostream>
using namespace std;

class Father {
    public: 
        Father() { cout << "Superclass" << endl; }
        Father(int x) {cout << "int Superclass" << endl; }
};

class Child1: public Father {
    public: 
        Child1() { cout << "Child1" << endl; }
        Child1(int x) { cout << "int Child1" << endl;}
};

class Child2: public Father {
    public: 
        Child2(int x) : Father(x) { cout << "int Child2" << endl; }
};

int main(void) {
    Child1 C1_1;
    cout << endl;
    Child1 Ch1_2(1);
    cout << endl;
    Child2 C2(1);
    cout << endl;
    return 0;
}