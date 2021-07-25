#include <iostream>
using namespace std;

class B {
    public: 
        int i;
    protected: 
        int j;
    private: 
        int k;
};

class A: public B {
    public: 
        void display() const {
            cout << i << endl;
            cout << j << endl;
            cout << k << endl;
        }
};

int main() {
    A a;
    cout << a.i << endl;
    cout << a.j << endl;
    cout << a.k << endl;
    a.display();

    return 0;
}

//These red wiggly lines show which could be accessed by them and which couldn't. 