// 상형 형변환
#include <iostream>
using namespace std;

class Animal{
public:
    void speak() { cout << "animal speak()" << endl; }
};

class Dog: public Animal{
public:
    int age;
    void speak() { cout << "멍멍" << endl; }
};


class Cat: public Animal{
public:
    void speak() { cout << "야옹" << endl; }
};

int main(){
    Animal *a1 = new Dog();
    a1->speak();
    
    Animal *a2 = new Cat();
    a2->speak();

    // a1->age = 10; //오류남 why? a1포인터변수는 엄연히 Animal 클래스를 가리키므로 Dog안에만 있는 age에 접근불가 
    return 0; 
}

// animal 포인터를 토앟여 객체의 멤버함수를 호출하더라도
// 객체의 종류에 따라서 서로 다른 speak()가 호출된다면
// 상당히 유용