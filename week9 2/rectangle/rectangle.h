#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class Rectangle {
    int _x, _y;
    int _width, _height;
    
public:

    Rectangle(int x, int y, int width, int height);

    int calcArea();

    void setX(int x);
    void setY(int y);
    void setWidth(int width);
    void setHeight(int height);

    int getX() const;
    int getY() const;
    int getWidth() const;
    int getHeight() const;

    void setRect(int x, int y, int width, int height);
};

#endif