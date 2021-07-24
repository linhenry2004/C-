#include <iostream>
using namespace std;

int main() {
    struct student {
        char name[20];
        int score;
    };
    student st1 = {"Peter", 89};
    student *st2 = &st1;

    cout << "Student name: " << st1.name << endl;
    cout << "Score: " << st1.score << endl << endl;
    cout << "Student name: " << st2->name << endl;
    cout << "Score: " << st2->score << endl << endl;
    
    return 0;
}