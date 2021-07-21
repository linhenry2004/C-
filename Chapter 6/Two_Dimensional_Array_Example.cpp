#include <iostream>
using namespace std;
int main(void) {
    int A[3][3], B[3][3], AB[3][3], sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Please insert a number for matrix A: ";
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Please insert a number for matrix B: ";
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum = 0;
            for (int r = 0; r < 3; r++) {
                sum += A[i][r] * B[r][j];
            }
            AB[i][j] = sum;
            cout << AB[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}