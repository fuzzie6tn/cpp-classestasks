#include <iostream>
#include <cmath>

using namespace std;

class Shape {
protected:
    double area;
    double perimeter;

public:
    Shape() : area(0.0), perimeter(0.0) {}

    double getArea() const {
        return area;
    }

    double getPerimeter() const {
        return perimeter;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {
        calculateArea();
        calculatePerimeter();
    }

    void calculateArea() {
        area = 3.14 * radius * radius; 
    }

    void calculatePerimeter() {
        perimeter = 2 * 3.14 * radius; 
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {
        calculateArea();
        calculatePerimeter();
    }

    void calculateArea() {
        area = length * width; 
    }

    void calculatePerimeter() {
        perimeter = 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {
        calculateArea();
        calculatePerimeter();
    }

    void calculateArea() {
       
        double s = (side1 + side2 + side3) / 2;
        area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    void calculatePerimeter() {
        perimeter = side1 + side2 + side3; 
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 4.0, 5.0);

    cout << "Circle - Area: " << circle.getArea() << ", Perimeter: " << circle.getPerimeter() << endl;
    cout << "Rectangle - Area: " << rectangle.getArea() << ", Perimeter: " << rectangle.getPerimeter() << endl;
    cout << "Triangle - Area: " << triangle.getArea() << ", Perimeter: " << triangle.getPerimeter() << endl;

    return 0;
}
