#include <iostream>
using namespace std;

// 같은 이름의 메서드가 다른 동작을 수행함
class Animal {
public:
    virtual void makeSound() {  // virtual 키워드로 다형성 지원
        cout << "Some generic animal sound." << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {  // 부모 클래스 메서드를 재정의
        cout << "Woof! Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {  // 부모 클래스 메서드를 재정의
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* myAnimal1 = new Dog();  // Dog 객체
    Animal* myAnimal2 = new Cat();  // Cat 객체

    myAnimal1->makeSound();  // 출력: Woof! Woof!
    myAnimal2->makeSound();  // 출력: Meow!

    delete myAnimal1;
    delete myAnimal2;
    return 0;
}