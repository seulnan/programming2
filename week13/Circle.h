#include "Shape.h"

class Circle : public Shape {
public:
    void Draw() const override;
    double getArea() const override;

    Circle();
    Circle(double x, double y, double radius);

    void SetRadius(double radius);

protected:
    double _radius;
};

Circle::Circle() : Shape(), _radius(100.0) {}
Circle::Circle(double x, double y, double radius) : Shape(x, y), _radius(radius) {}

void Circle::Draw() const {
    cout << "[Circle] Position = (" << _x << ", " << _y << ") "
         << "Radius = " << _radius << "\n";
}

double Circle::getArea() const {
    return 3.14159 * _radius * _radius;
}

void Circle::SetRadius(double radius) {
    _radius = radius;
}