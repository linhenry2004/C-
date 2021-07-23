#include <iostream>
using namespace std;

int main() {
    int k = 100;
    int &r = k;
    int *p = &k;

    cout << "&k = " << &k << endl;
    cout << "&r = " << &r << endl;
    cout << "&p = " << &p << endl;
    cout << "p = " << p << endl << endl;

    cout << "k = " << k << endl;
    cout << "r = " << r << endl;
    cout << "*p = " << *p << endl << endl;

    r++;
    cout << "k = " << k << endl;
    cout << "r = " << r << endl;
    cout << "*p = " << *p << endl << endl;

    k++;
    cout << "k = " << k << endl;
    cout << "r = " << r << endl;
    cout << "*p = " << *p << endl << endl;

    getchar();
    return 0;
}

/*
In this case, r is just an alias of k, and their address will be the same because they are the same thing. 
p is a pointer variable, and it is the address of k. *p is the thing stored in address p. 
*/