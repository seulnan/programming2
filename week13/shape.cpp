#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

int main() {
    // Create objects
    Rectangle rect(0, 0, 50, 30);
    Circle circ(10, 10, 20);
    Triangle tri(5, 5, 40, 25);

    // Draw shapes
    rect.Draw();
    cout << "Rectangle Area: " << rect.getArea() << "\n\n";

    circ.Draw();
    cout << "Circle Area: " << circ.getArea() << "\n\n";

    tri.Draw();
    cout << "Triangle Area: " << tri.getArea() << "\n\n";

    // Move shapes
    rect.Move(10, 10);
    circ.Move(20, 20);
    tri.Move(15, 15);

    cout << "After moving shapes:\n";
    rect.Draw();
    circ.Draw();
    tri.Draw();

    return 0;
}