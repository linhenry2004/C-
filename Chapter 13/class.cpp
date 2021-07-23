#include <iostream>
using namespace std;
class Cuboid {
    public: 
        void set_values (int, int, int);
        int volume () {return x*y*z; }
    private: 
        int x, y, z;
}; 

void Cuboid::set_values(int a, int b, int c) {
    if(a <= 0 || b <= 0 || c <= 0 ) cout << "Warning! the sidelengths should be greater than 0!" << endl;
    x = a;
    y = b;
    z = c;
    return;
}

int main(void) {
    Cuboid C1;
    int x, y, z;
    cout << "Please insert the sidelengths: ";
    cin >> x >> y >> z;

    C1.set_values(x, y, z);
    cout << "The volume is: " <<C1.volume() << endl;

    return 0;
}

/*
In C++ the :: is called the Scope Resolution Operator. It makes it clear to which namespace or class a symbol belongs.
*/