#include <iostream>
using namespace std;

int main() {
    int *pa = new int[6];
    for (int i = 0; i < 6; i++) {
        pa[i] = i * 100;
        cout << "pa[" << i << "] = " << pa[i] << endl;
    }
    delete [] pa;
    return 0;
}