#include <iostream>
using namespace std;

class Time {
    private: 
        int hours;
        int minutes;
    public: 
        Time();
        Time(int h, int m = 0);
        void AddMin(int m);
        void AddHr(int h);
        void Reset(int h = 0, int m = 0);
        Time operator+(const Time & t) const;
        Time operator-(const Time & t) const;
        Time operator*(int n) const;
        friend Time operator*(int m, const Time & t);
        friend ostream & operator<<(ostream & os, const Time & t);
};

Time operator*(int m, const Time & t) {
    return t * m;
}

ostream & operator<<(ostream & os, const Time & t) {
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}

Time::Time() {
    hours = minutes = 0;
}

Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

Time Time::operator+(const Time & t) const {
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes/60;
    sum.minutes %= 60;
    return sum;
}

Time Time::operator-(const Time & t) const {
    Time diff;
    int tot1, tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = minutes + 60 * hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}

Time Time::operator*(int mult) const {
    Time result;
    int totalminutes = hours * mult * 60 + minutes * mult;
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}

int main() {
    Time A;
    Time B(6, 30);
    Time C(3, 45);

    cout << "A = " << A << endl << "B = " << B << endl;
    cout << "C = " << C << endl << endl;

    A = B + C;
    cout << A << endl;
    A = B * 2;
    cout << A << endl;
    cout << "20 * B: " << 20 * B << endl;
    
    getchar();
    return 0;
}