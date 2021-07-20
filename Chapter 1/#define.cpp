//We use #define to define a certain variable, which can be called in the rest of the code
#include <iostream>
#define rate 1.0168
using namespace std;

int main () {
    int myAccount;
    cout << "Please input the value: ";
    cin >> myAccount;
    cout << myAccount * rate << endl;
}