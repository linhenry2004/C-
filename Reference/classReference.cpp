#include <iostream>
using namespace std;

class Student {
private: 
    char name[20];
    int score;
public: 
    Student();
    void process();
    friend ostream & operator << (ostream & os, const Student & s1);
};

Student::Student() {
    cout << "Please input student name: ";
    cin >> name;
    cout << "Please input score: ";
    cin >> score;
}

void Student::process() {
    if(score >= 60)
        cout << "Congratulation! Your C++ is pass\n";
    else
        cout << "Sorry! Your C++ is down\n";
}

ostream & operator << (ostream & os, const Student & s1) {
    os << "Student: " << s1.name << endl;
    os << "C++ score: " << s1.score << endl;
    return os;
}

int main () {
    Student stu;
    
    cout << stu;
    stu.process();

    getchar();
    return 0;
}