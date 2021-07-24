#include <iostream>
#define PI 3.1415926
using namespace std;

class Circle {
    public: 
        Circle();
        Circle(double);
        double getArea();
        double getRadius();
        void setRadius(double);
    private:
        double radius;
};

Circle::Circle() {
    radius = 1;
}

Circle::Circle(double newRadius) {
    radius = newRadius;
}

double Circle::getArea() {
    return radius * radius * PI;
}

double Circle::getRadius() {
    return radius;
}

void Circle::setRadius(double newRadius) {
    radius = (newRadius >= 0) ? newRadius : 0;
}

int main() {
    Circle circle1;
    Circle circle2(5.0);

    cout << "The area of the circle of radius " << circle1.getRadius() << " is " << circle1.getArea() << endl;
    cout << "The area of the circle of radius " << circle2.getRadius() << " is " << circle2.getArea() << endl;

    circle2.setRadius(100);
    cout << "The area of the circle of radius " << circle2.getRadius() << " is " << circle2.getArea() << endl;

    return 0;
}