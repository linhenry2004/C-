#include <iostream>
using namespace std;
void callByReference(int &);

int main() {
    int k = 100;
    cout << "The address of k is " << &k << endl;
    cout << "k = " << k << endl;
    callByReference(k);
    cout << "k = " << k << endl;

    getchar();
    return 0;
}

void callByReference (int &x) {
    cout << "The address of x is " << &x << endl;
    x += 1000;
}

//By giving the address of k, x could change k as well, and they share the same address now. 