#include <iostream>
using namespace std;
int main (void) {
    int line [3][3], ans = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Please input a number: ";
            cin >> line[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        ans = ans + line[0][i]*line[1][(i+1)%3]*line[2][(i+2)%3] - line[0][(i+2)%3]*line[1][(i+1)%3]*line[2][i];
    }
    cout << "Ans = " << ans << endl;
    return 0;
}