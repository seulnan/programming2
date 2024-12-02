#include <Shape.h>

class Rectangle : public Shape
{
public:
    void Draw() const;
    void Resize(double width, double height);

    Rectangle();
    Rectangle(double x, double y, double width, double height);

protected:
    double _width;
    double _height;
};

Rectangle::Rectangle()
{
    _width = _height = 100.0f;
}

Rectangle::Rectangle(double x, double y, double width, double height)
: Shape(x, y)
{
    Resize(width, height);
}

void Rectangle::Draw() const
{
    cout << "[Rectangle] Position = ( " << _x << ", " << _y << " ) "
         << "Size = ( " << _width << ", " << _height << " ) \n";
}

void Rectangle::Resize(double width, double height)
{
    _width = width;
    _height = height;
}