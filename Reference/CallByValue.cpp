#include <iostream>
using namespace std;
void callByValue (int);

int main (void) {
    int k = 100;
    cout << "The address of k is " << &k << endl;
    cout << "k =" << k << endl;
    callByValue(k);
    cout << k << endl;

    getchar();
    return 0;
}

void callByValue(int x) {
    cout << "The address of x is " << &x << endl;
    x += 1000;
}

//Since the address is different, changing x does not change k