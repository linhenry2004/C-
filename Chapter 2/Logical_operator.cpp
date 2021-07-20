#include <iostream>
using namespace std;

int main() {
    int number;
    bool check = false;

    cout << "Please input a number: ";
    cin >> number;
    check = (number >= 100 && number <= 999);
    cout << check << endl;
}

/*
AND operator: &&
OR operator: ||
NOT operator: !
*/