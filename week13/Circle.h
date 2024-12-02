#include <Shape.h>

// 원을 상징하는 클래스
class Circle : public Shape
{
public:
    void Draw() const;
    void SetRadius(double radius);

    Circle();
    Circle(double x, double y, double radius);

protected:
    double _radius;
};

Circle::Circle()
{
    _radius = 100.0f;
}

Circle::Circle(double x, double y, double radius)
: Shape(x, y)
{
    SetRadius(radius);
}

void Circle::Draw() const
{
    cout << "[Circle] Position = ( " << _x << ", " << _y << " ) "
         << "Radius = " << _radius << " \n";
}

void Circle::SetRadius(double radius)
{
    _radius = radius;
}