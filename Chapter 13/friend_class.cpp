#include <iostream>
using namespace std;
class Cuboid {
    public: 
        void set_values(int, int, int);
        int volume() { return x*y*z; }
        friend class Box;
    private: 
    int x, y, z;
};

class Box {
    public: 
        void set_size(Cuboid);
        int volume() { return i*i*i; }
    private: 
        int i;
};

void Cuboid::set_values(int a, int b, int c) {
    x = a;
    y = b;
    z = c;
    return;
}

void Box::set_size(Cuboid C) {
    int max = C.x;
    if (C.y > max) { max = C.y; }
    if (C.z > max) { max = C.z; }
    i = max;
    return;
}

int main(void) {
    Cuboid C1;
    Box B1;
    C1.set_values(1, 2, 3);
    B1.set_size(C1);
    cout << C1.volume() << endl;
    cout << B1.volume() << endl;
}

//Since Box is a friend class of Cuboid, it can access the private variables in the Cuboid class