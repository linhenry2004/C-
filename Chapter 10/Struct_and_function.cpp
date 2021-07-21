#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

struct FRIEND {
    string name;
    string phone;
    string birth;
};

void show(FRIEND [], int);
FRIEND enter(void);

int main(void) {
    int now = 0;
    char ch;
    FRIEND f[20];
    while (1) {
        cout <<"1)Insert 2)Add 0)Exit ";
        cin >> ch;
        if(ch == '1') {
            if(now != 0) {
                show(f, now);
            } else {
            cout << "No info yet";
            }
        } else if(ch == '2') {
            if(now >= 20) {
                cout << "List has reached its maximum!";
            } else {
                f[now] = enter();
                now++;
            }
        } else if (ch == '0') {
            break;
        }
        fflush(stdin);
    }
    return 0;
}

void show(FRIEND f[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "======================================" << endl;
        cout << f[i].name << "'s phone number: " << f[i].phone << endl;
        cout << f[i].name << "'s birthday: " << f[i].birth << endl;
    }
    cout << "======================================" << endl;
}
FRIEND enter(void) {
    FRIEND newFriend;
    cout << "Name: ";
    cin >> newFriend.name;
    cout << "Phone number: ";
    cin >> newFriend.phone;
    cout << "Birthday: ";
    cin >> newFriend.birth;
    return newFriend;
}