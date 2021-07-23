#include <iostream>
using namespace std;
class Rectangle {
    protected: 
        int x, y;
    public: 
        void set_value_ (int a, int b) {
            x = a; y = b;
        }
        int area() {return x * y; }
};

class Cuboid: public Rectangle { //Cuboid is a subclass of Rectangle
    private: 
        int z;
    public: 
        void set_values(int a, int b, int c) {
            set_value_(a, b); z = c;
        }
        int volume() { return area() * z; }
};

int main(void) {
    Cuboid C1;
    C1.set_values(1, 2, 3);
    cout << C1.volume() << endl;
    return 0;
}

/*
protected variables: Variables that works like private, but can be used by subclasses
*/