/*
define: Define a variable that can be used throughout the code
#define PI 3.1415926

*Another way to use define: 
#define f(x) x+3
cout << f(2); -> cout << 2+3

undef: Undefine - Cancels any previous definitions
#undef NUM
#define NUM 50
*/

#include <iostream>
#define SWAP(x, y, t) (t = x, x = y, y = t)
using namespace std;

int main (void) {
    int x = 3, y = 4, temp;
    SWAP (x, y, temp);
    cout << "x = " << x << " y = " << y << endl;
    return 0;
}