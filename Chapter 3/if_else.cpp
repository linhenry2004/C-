#include <iostream>
using namespace std;

int main() {
    int score; 
    cout<<"Please input the score: ";
    cin >> score;
    if (score >= 90){
        cout << "You get an A" << endl;
    } else if (score >= 80) {
        cout << "You get a B" << endl;
    } else if (score >= 70) {
        cout << "You get a C" << endl;
    } else if (score >= 60) {
        cout << "You get a D" << endl;
    } else {
        cout << "You get an F" << endl;
    }
}