#include <iostream>
using namespace std;
class Coordinate {
    public: 
        int x, y;
        Coordinate () {};
        Coordinate (int, int);
        Coordinate operator + (Coordinate);
};

Coordinate::Coordinate(int a, int b) {
    x = a;
    y = b;
}

Coordinate Coordinate::operator + (Coordinate coord) {
    Coordinate temp;
    temp.x = x + coord.x;
    temp.y = y + coord.y;
    return temp;
}

int main (void) {
    Coordinate C1(2, 3), C2(1, 2);
    Coordinate C3;
    C3 = C1 + C2;
    cout << C3.x << ", " << C3.y << endl;

    return 0;
}