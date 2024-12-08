#include <iostream>
using namespace std;

class Circle{
public:
    int radius;
    string color;

    double calcArea(){
        return 3.14 * radius * radius;
    }
};

int main(){
    Circle pizza1, pizza2;

    pizza1.radius = 200;
    pizza1.color = "red";
    cout << "피자1면적" << pizza1.calcArea() << "\n";
    
    pizza2.radius = 100;
    pizza2.color = "blue";
    cout << "피자2면적" << pizza2.calcArea() << "\n";
}