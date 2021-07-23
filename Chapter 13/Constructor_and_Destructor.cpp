#include <iostream>
using namespace std;
class Cuboid {
    public: 
        Cuboid(int, int, int);
        ~ Cuboid();
        int volume() { return (*x) * (*y) * (*z); }
    private: 
        int *x, *y, *z;
};

Cuboid::Cuboid(int a, int b, int c) {
    cout << "Cuboid object constructed\n";
    x = new int;
    y = new int;
    z = new int;
    *x = a;
    *y = b;
    *z = c;
}

Cuboid::~Cuboid() {
    cout << "Cuboid object destructed\n";
    delete x;
    delete y;
    delete z;
}

int main(void) {
    Cuboid C1(2, 3, 3) , C2(5, 5, 5);
    cout << C1.volume() << endl;
    cout << C2.volume() << endl;
    return 0;
}

/*
Constructor: In this example, Cuboid:: Cuboid() is the constructor
Destrucor: If we add ~ in front of it, it became a destructor
When we return 0 in main(), it will automatically destruct the objects
*/