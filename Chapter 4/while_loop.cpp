#include <iostream>
using namespace std;

int main() {
    int i, num, ans;
    while (true) {
        i = 1;
        ans = 0;
        cout << "Please input a number: ";
        cin >> num;
        while (i <= num) {
            ans += i;
            i++;
        }
        cout << ans << endl;
    }
}