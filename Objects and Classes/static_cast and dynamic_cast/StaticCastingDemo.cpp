#include <string>
#include <iostream>
using namespace std;

class GeometricObject
{
protected:
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

public:
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
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;

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

private:
    double width;
    double height;
};

void displayGeometricObject(GeometricObject &g)
{
    GeometricObject *p = &g;
    cout << "The radius is " << static_cast<Circle *>(p)->getRadius() << endl;
    cout << "The diameter is " << static_cast<Circle *>(p)->getDiameter() << endl;

    cout << "The width is " << static_cast<Rectangle *>(p)->getWidth() << endl;
    cout << "The height is " << static_cast<Rectangle *>(p)->getHeight() << endl;

    cout << "The area is " << g.getArea() << endl;
    cout << "The perimeter is " << g.getPerimeter() << endl;
}

int main()
{
    Rectangle rectangle(5, 3);
    displayGeometricObject(rectangle);
}