#include <iostream>
using namespace std;

int main()
{
    int myvar = 25;    //Declare an integer myvar, set to 25
    int *foo = &myvar; //Using an address-of operator, get the address of the integer myvar
    int bar = myvar;   //Without the '&' sign, the integer bar would simply be 25
    cout << myvar << " " << foo << " " << bar << endl;
    return 0;
}