#include <iostream>
using namespace std;
int main() {
    char str[] = "This is a string";
    for (int i = 0; i < (sizeof(str)/sizeof(str[0])); i++) {
        if (str[i] == '\0') {
            cout << " END";
        } else {
            cout << str[i];
        }
    } 
    cout << endl;
    return 0;
}