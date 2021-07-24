#include <iostream>
using namespace std;
// & operator: Gets the variable's address (Where is this variable located?)
// * operator: Gets the address's stored variable (On this location, which variable is stored?)
// ** operator: Address of the address's stored variable
// *** operator: Address of the address of the address's stored variable
int main (void) {
    int a = 10;
    int *ptr = &a;
    cout << a << endl << ptr << endl;
}