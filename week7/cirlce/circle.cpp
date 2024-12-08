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
    Circle obj;

    obj.radius = 3;
    obj.color = "red";

    cout << "원 면적 = " << obj.calcArea() << "\n";
    return 0;
}