#include <iostream>
using namespace std;

int main (void) {
    int stuScore[10], total = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Please input a grade: ";
        cin >> stuScore[i];
    }
    for (int i = 0; i < 10; i++) {
        total = total + stuScore[i];
    }
    cout << "The average is: " << (double)total / 10 << endl;
    return 0;
}