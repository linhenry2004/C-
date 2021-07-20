#include <iostream>
using namespace std;

int main () {
    int a = 5;
    int b = 5;
    bool c, d, e;

    c = (a == b);
    d = (a < b);
    e = (c != d);
    cout << c << ' ' << d << ' ' << e << endl;
}

/*
Equals: ==
Not equals: !=
Greater than: >
Less than: <
Greater than or equal to: >
Less than or equal to: <
*/