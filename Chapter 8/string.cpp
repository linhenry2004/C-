#include <iostream>
#include <string>
using namespace std;

int main (void) {
    string s1;
    string s2("String is fun!");
    s1 = s2;
    s2 = s1 + s2;
    cout << "String 1 is: " << s1 << endl;
    cout << "String 2 is: " << s2 << endl;

    cout << "\n";

    if(s1.empty()) {
        cout << "String 1 is empty!" << endl;
    }
    cout << "String 2 is " << s2.size() << " characters long" << endl;

    cout << "\n";

    string str1("String is fun!");
    string str2("String is fun!");
    string str3("String is not fun!");
    if (str1 == str2) {
        cout << "String 1 and string 2 are the same." << endl;
    } else {
        cout << "String 1 and string 2 are not the same." << endl;
    }
    if (str1 == str3) {
        cout << "String 1 and string 3 are the same." << endl;
    } else {
        cout << "String 1 and string 3 are not the same." << endl;
    }
    return 0;
}

/*
find(string s, int n) method: Find whether it includes string s after n characters
insert(int n, string s) method: Inserts string s after n characters
*/