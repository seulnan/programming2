#include <iostream>
using namespace std;

// 부모클래스의 기능을 자식클래스가 물려받아 재사용하거나 확장하는 개념
class Animal {
public:
    void eat() { cout << "I am eating." << endl; }
};

class Dog : public Animal {  // Animal을 상속받음
public:
    void bark() { cout << "Woof! Woof!" << endl; }
};

int main() {
    Dog myDog;
    myDog.eat();  // Animal의 메서드 사용
    myDog.bark(); // Dog의 메서드 사용
    return 0;
}