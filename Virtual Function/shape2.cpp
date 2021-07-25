#include <iostream>
#include <math.h>
using namespace std;

class Shape {
    protected: 
        double x, y;
    public: 
        virtual double compute_area() = 0;
        virtual void draw() = 0;
};

class Circle: public Shape {
    private: 
        double radius;
    public: 
        Circle(double a, double b, double r) {
            x = a;
            y = b;
            radius = r;
        }
        double compute_area() {
            return (3.14159 * radius * radius);
        }
        void draw() {
            cout << "Draw: Circle of radius " << radius << " at (" << x << ", " << y << ")" << endl;
        }
};

class Rectangle: public Shape {
    private: 
        double x2, y2;
    public: 
        Rectangle(double a, double b, double c, double d) {
            x = a;
            y = b;
            x2 = c;
            y2 = d;
        }
        double compute_area() {
            return fabs((x2-x)*(y2-y));
        }
        void draw() {
            cout << "Draw: Rectangle of corners (" << x << ", " << y << ") (" << x2 << ", " << y2 << ")" << endl;
        }
};

int main() {
    int i;
    Shape *shapes[2];

    shapes[0] = new Circle(100.0, 100.0, 50.0);
    shapes[1] = new Rectangle(90.0, 100.0, 110, 300);

    for(i = 0; i < 2; i++) {
        cout << "Area of shae[" << i << "] = " << shapes[i]->compute_area() << endl;
        shapes[i]->draw();
    }

    return 0;
}