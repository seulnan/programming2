#include "Shape.h"

class Rectangle : public Shape {
public:
    void Draw() const override;
    double getArea() const override;

    Rectangle();
    Rectangle(double x, double y, double width, double height);

    void Resize(double width, double height);

protected:
    double _width, _height;
};

Rectangle::Rectangle() : Shape(), _width(100.0), _height(100.0) {}
Rectangle::Rectangle(double x, double y, double width, double height)
    : Shape(x, y), _width(width), _height(height) {}

void Rectangle::Draw() const {
    cout << "[Rectangle] Position = (" << _x << ", " << _y << ") "
         << "Size = (" << _width << ", " << _height << ")\n";
}

double Rectangle::getArea() const {
    return _width * _height;
}

void Rectangle::Resize(double width, double height) {
    _width = width;
    _height = height;
}