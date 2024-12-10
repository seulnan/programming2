#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

int main() {
    Rectangle rect(0, 0, 50, 30);
    Circle circ(10, 10, 20);
    Triangle tri(5, 5, 40, 25);

    rect.Draw();
    cout << "Rectangle Area: " << rect.getArea() << "\n\n";

    circ.Draw();
    cout << "Circle Area: " << circ.getArea() << "\n\n";

    tri.Draw();
    cout << "Triangle Area: " << tri.getArea() << "\n\n";

    return 0;
}