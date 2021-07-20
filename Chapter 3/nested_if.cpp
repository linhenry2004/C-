#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    if(!(year%4)){
        if(!(year%100) && year%400) {
            cout << year << " is not a leap year" << endl;
        } else {
            cout << year << " is a leap year" << endl;
        }
    } else {
        cout << year << " is not a leap year" << endl;
    }

    return 0;
}