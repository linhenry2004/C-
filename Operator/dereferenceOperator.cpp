#include <iostream>
using namespace std;

int main()
{
    int myvar = 25;
    int *foo = &myvar; //foo now stores the address of myvar.
    int baz = *foo;    //Instead of getting the value of foo, the '*' sign finds the value in the address foo. In this case, 25.
    cout << myvar << " " << foo << " " << baz << endl;
    return 0;
}