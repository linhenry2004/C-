#include <iostream>
using namespace std;

class Myfirst {
    private: 
        static int objnumber;
        int wnt;
        char *firstname;
        char *lastname;
        double average, num1, num2, total;
    public: 
        Myfirst();
        void input();
        void output();
        void process();
        void pass();
        ~ Myfirst();
};
int Myfirst::objnumber = 0;

Myfirst::Myfirst() {
    firstname = new char[20];
    lastname = new char[20];
}

Myfirst::~Myfirst() {
    delete [] firstname;
    delete [] lastname;
    cout << "Call destructor, delete number " << objnumber--;
    cout << endl;
}

void Myfirst::input() {
    cout << "This is class number " << ++objnumber << endl;
    cout << "Input your firstname: ";
    cin >> firstname;
    cout << "Input your lastname: ";
    cin >> lastname;
    cout << endl << "Input your score: " << endl;
    cout << "Input midterm score: ";
    cin >> num1;
    cout << "Input final score: ";
    cin >> num2;

    process();
    output();
    pass();
}

void Myfirst::process() {
    total = num1 + num2;
    average = total / 2.;
}

void Myfirst::output() {
    cout << endl << "Total = " << total << endl;
    cout << "Average = " << average << endl;
}

void Myfirst::pass() {
    if(average >= 60) {
        cout << "Congrats! You passed!" << endl << endl;
    } else {
        cout << "Sorry, you failed. " << endl << endl;
    }
}

int main() {
    Myfirst *myobj = new Myfirst[3];
    for (int i = 0; i < 3; i++) {
        myobj[i].input();
    }
    delete [] myobj;
    return 0;
}