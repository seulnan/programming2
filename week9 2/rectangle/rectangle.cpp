#include "rectangle.h"


Rectangle::Rectangle(int x, int y, int width, int height) 
    : _x(x), _y(y), _width(width), _height(height) {}


int Rectangle::calcArea() {
    return _width * _height;
}


void Rectangle::setX(int x) {
    _x = x;
}

void Rectangle::setY(int y) {
    _y = y;
}

void Rectangle::setWidth(int width) {
    _width = width;
}

void Rectangle::setHeight(int height) {
    _height = height;
}

int Rectangle::getX() const {
    return _x;
}

int Rectangle::getY() const {
    return _y;
}

int Rectangle::getWidth() const {
    return _width;
}

int Rectangle::getHeight() const {
    return _height;
}

void Rectangle::setRect(int x, int y, int width, int height) {
    _x = x;
    _y = y;
    _width = width;
    _height = height;
}

int main() {
    Rectangle r(0, 0, 3, 4);
    cout << "기존 area: " << r.calcArea() << endl;

    r.setRect(1, 2, 5, 6);
    cout << "새 area: " << r.calcArea() << endl;
    cout << "새 위치: (" << r.getX() << ", " << r.getY() << ")" << endl;
    cout << "새 가로와 세로길이: " << r.getWidth() << ", " << r.getHeight() << endl;

    return 0;
}