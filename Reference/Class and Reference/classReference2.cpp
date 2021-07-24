#include <iostream>
using namespace std;

class Time {
    private:
        int hours;
        int minutes;
    public: 
        Time();
        Time(int h, int m = 0);
        Time sum(const Time & t) const;
        void show() const;
};

Time::Time() {
    hours = minutes = 0;
}

Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

Time Time::sum(const Time & t) const {
    Time sum; 
    sum.minutes = minutes +  t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void Time::show() const {
    cout << hours << " hours, " << minutes << " minutes";
    cout << "\n";
}

int main () {
    Time A;
    Time B(6, 30);
    Time C(3, 45);

    cout << "A = ";
    A.show();
    cout << "B = ";
    B.show();
    cout << "C = ";
    C.show();

    A = B.sum(C);
    cout << "B.sum(C) = ";
    A.show();
    getchar();
    return 0;
}