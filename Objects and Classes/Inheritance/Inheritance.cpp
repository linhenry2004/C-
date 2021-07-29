#include <iostream>
#include <string>
using namespace std;

class GeometricObject
{
public:
    GeometricObject()
    {
        color = "white";
        filled = false;
    }
    GeometricObject(const string &color, bool filled)
    {
        this->color = color;
        this->filled = filled;
    }
    string getColor() const
    {
        return color;
    }
    void setColor(const string &color)
    {
        this->color = color;
    }
    bool isFilled() const
    {
        return filled;
    }
    void setFilled(bool filled)
    {
        this->filled = filled;
    }
    string toString() const
    {
        return "Geometric object";
    }

private:
    string color;
    bool filled;
};

class Circle : public GeometricObject
{
public:
    Circle()
    {
        radius = 1;
    }
    Circle(double radius)
    {
        setRadius(radius);
    }
    Circle(double radius, const string &color, bool filled)
    {
        setRadius(radius);
        setColor(color);
        setFilled(filled);
    }
    double getRadius() const
    {
        return radius;
    }
    void setRadius(double radius)
    {
        this->radius = (radius >= 0) ? radius : 0;
    }
    double getArea() const
    {
        return radius * radius * 3.14159;
    }
    double getPerimeter() const
    {
        return 2 * radius * 3.14159;
    }
    double getDiameter() const
    {
        return 2 * radius;
    }
    string toString() const
    {
        return "Circle object";
    }

private:
    double radius;
};

class Rectangle : public GeometricObject
{
public:
    Rectangle()
    {
        width = 1;
        height = 1;
    }
    Rectangle(double width, double height)
    {
        setWidth(width);
        setHeight(height);
    }
    Rectangle(double width, double height, const string &color, bool filled)
    {
        setWidth(width);
        setHeight(height);
        setColor(color);
        setFilled(filled);
    }
    double getWidth() const
    {
        return width;
    }
    void setWidth(double width)
    {
        this->width = (width >= 0) ? width : 0;
    }
    double getHeight() const
    {
        return height;
    }
    void setHeight(double height)
    {
        this->height = (height >= 0) ? height : 0;
    }
    double getArea() const
    {
        return width * height;
    }
    double getPerimeter() const
    {
        return 2 * (width + height);
    }
    string toString() const
    {
        return "Rectangle object";
    }

private:
    double width;
    double height;
};

int main()
{
    GeometricObject shape;
    shape.setColor("red");
    shape.setFilled(true);
    cout << shape.toString() << endl
         << "Color: " << shape.getColor()
         << " Filled: " << (shape.isFilled() ? "true" : "false")
         << endl;

    Circle circle(5);
    shape.setColor("black");
    shape.setFilled(false);
    cout << circle.toString() << endl
         << "Color: " << circle.getColor()
         << " Filled: " << (circle.isFilled() ? "true" : "false")
         << " Radius: " << circle.getRadius()
         << " Area: " << circle.getArea()
         << " Perimeter: " << circle.getPerimeter()
         << endl;

    Rectangle rectangle(2, 3);
    rectangle.setColor("Orange");
    rectangle.setFilled(true);
    cout << rectangle.toString() << endl
         << "Color: " << rectangle.getColor()
         << " Filled: " << (rectangle.isFilled() ? "true" : "false")
         << " Width: " << rectangle.getWidth()
         << " Height: " << rectangle.getHeight()
         << " Area: " << rectangle.getArea()
         << " Perimeter: " << rectangle.getPerimeter()
         << endl;

    return 0;
}