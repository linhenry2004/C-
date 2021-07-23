#include <iostream>
using namespace std;

class Rectangle {
    protected: 
        int x, y;
    public: 
        void r_set_values(int a, int b) {
            x = a; y = b;
        }
        int size() { return x*y; }
};

class Cuboid: public Rectangle {
    private: 
        int z;
    public: 
        void c_set_values(int a, int b, int c) {
            r_set_values(a, b); z = c;
        }
        int size() { return x*y*z; }
};

int main (void) {
    Rectangle R1;
    Cuboid C1;
    R1.r_set_values(1, 2);
    C1.c_set_values(1, 2, 3);
    cout << R1.size() << endl;
    cout << C1.size() << endl;
    return 0;
}