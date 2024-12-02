#include "Shape.h"

class Triangle : public Shape {
public:
    void Draw() const override;
    double getArea() const override;

    Triangle();
    Triangle(double x, double y, double base, double height);

    void SetBaseHeight(double base, double height);

protected:
    double _base, _height;
};

Triangle::Triangle() : Shape(), _base(100.0), _height(100.0) {}
Triangle::Triangle(double x, double y, double base, double height)
    : Shape(x, y), _base(base), _height(height) {}

void Triangle::Draw() const {
    cout << "[Triangle] Position = (" << _x << ", " << _y << ") "
         << "Base = " << _base << ", Height = " << _height << "\n";
}

double Triangle::getArea() const {
    return 0.5 * _base * _height;
}

void Triangle::SetBaseHeight(double base, double height) {
    _base = base;
    _height = height;
}