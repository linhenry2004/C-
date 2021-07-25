#include <iostream>
using namespace std;

class Parent {
    public: 
        void f() {
            cout << "invoke f from Parent" << endl;
        }
};

class Child: public Parent {
    public: 
        void f() {
            cout << "\ninvoke f from child" << endl;
        }
};

void p(Parent a) {
    cout << "\n invoke method from function" << endl;
    a.f();
}

int main() {
    Parent a;
    a.f();
    p(a);

    Child c;
    c.f();
    p(c);

    return 0;
}