#include <iostream>
using namespace std;

inline void f(int month, int year) {
    cout << "Month is " << month << endl;
    cout << "year is " << year << endl;
}

int main () {
    int month = 10, year = 2021;
    f(month, year);
    f(6, 2004);

    return 0;
}