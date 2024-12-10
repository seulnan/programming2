#include <iostream>
using namespace std;

// Base class Shape
class Shape {
public:
    virtual void Move(double x, double y);
    virtual void Draw() const;
    virtual double getArea() const = 0; 

    Shape();
    Shape(double x, double y);

protected:
    double _x, _y;
};

Shape::Shape() : _x(0), _y(0) {}
Shape::Shape(double x, double y) : _x(x), _y(y) {}

void Shape::Move(double x, double y) {
    _x = x;
    _y = y;
}

void Shape::Draw() const {
    cout << "[Shape] Position = (" << _x << ", " << _y << ")\n";
}