#include <iostream>
using namespace std;

int main () {
    int x = 10;
    int a = x + 4;
    int b = x - 4;
    int c = x * 4;
    int d = x / 4;
    int e = x % 4;

    double C, F;

    cout <<"Please input in Fahrenheit degrees: ";
    cin >> F;
    C = (F - 32) * 5 / 9;
    cout << F << " degrees fahrenheit is equal to " << C << " degrees celsius.";

    return 0;
}

/*
Add: +
Subtract: -
Multiply: *
Divide: /
Modulo: %
*/