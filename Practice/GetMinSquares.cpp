#include <iostream>
#include <math.h>
using namespace std;

bool isSquare(int x) {
    int sqRoot = sqrt(x);
    return (sqRoot * sqRoot == x);
}

int cntSquares(int n) {
    if (isSquare(n)) {
        return 1;
    }
    for (int i = 1; i <= (int)sqrt(n) / 2; i++) {
        if (isSquare(n - (i * i))) {
            return 2;
        }
    }
    while (n % 4 == 0) {
        n /= 4;
    }
    if (n % 8 == 7) {
        return 4;
    }
    return 3;
}

int main () {
    int n;
    cin >> n;
    cout << cntSquares(n) << endl;
    return 0;
}