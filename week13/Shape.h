#include <iostream>
using namespace std;

// 일반적인 '도형'을 상징하는 클래스
class Shape
{
public:
    void Move(double x, double y);
    void Draw() const;

    Shape();
    Shape(double x, double y);

protected:
    double _x, _y;
};

Shape::Shape()
{
    _x = _y = 0.0;
}

Shape::Shape(double x, double y)
{
    _x = x;
    _y = y;
}

void Shape::Move(double x, double y)
{
    _x = x;
    _y = y;
}

void Shape::Draw() const
{
    cout << "[Shape] Position = ( " << _x << ", " << _y << " )\n";
}