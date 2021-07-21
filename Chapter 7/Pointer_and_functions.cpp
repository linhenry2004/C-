#include <iostream>
using namespace std;

void vset(int, int);
void rset(int*, int);
int main(void) {
    int x = 0;
    int *p;
    p = &x;
    vset(x, 1);
    cout << "x = " << x << " ";
    rset(p, 1);
    cout << "x = " << x << endl;
    return 0;
}
void vset (int x, int y) {
    x = y;
}
void rset (int *p, int y) {
    *p = y;
}