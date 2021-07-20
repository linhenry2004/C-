#include <iostream>
using namespace std;

int main() {
    int ans = 27;
    int guess = -1;
    while (guess != ans) {
        cout << "Please guess a number between 1 and 100: ";
        cin >> guess;
        if (guess==ans) {
            cout << "Correct!" << endl;
            break;
        } else if (guess < ans) {
            cout << "Too small!" << endl;
            if (ans-guess <= 5) cout << "It's close!" << endl;
        } else {
            cout << "Too big!" << endl;
            if (guess-ans <= 5) cout << "It's close!" << endl;
        }
    }
}