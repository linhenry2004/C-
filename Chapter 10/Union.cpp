#include <iostream>
using namespace std;
union my_union {
    int a;
    char b;
    double c;
};

int main() {
    union my_union u1;
    u1.a = 65;
    cout << u1.a << " " << u1.b << " " << u1.c << endl;
    return 0;
}