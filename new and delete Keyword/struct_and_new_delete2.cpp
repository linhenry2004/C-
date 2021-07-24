#include <iostream>
using namespace std;

int main() {
    struct Student {
        char name[20];
        int score;
    };

    Student *pst = new Student;
    cout << "Input a student name: ";
    cin >> pst->name;
    cout << "Input a score: ";
    cin >> pst->score;

    cout << endl << "Student name: " << pst->name << endl;
    cout << endl << "Score: " << pst->score << endl;

    delete pst;
    return 0;
}