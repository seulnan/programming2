#include <iostream>
using namespace std;

class Dog{
private:
    string name;
    int age;
public:
    Dog(){
        cout << "생성자 호출\n";
        age = 1;
        name = "바둑이";
    }

    ~Dog(){
        cout << "소멸자 호출\n";
    }
    int getAge() { return age; }
    void setAge(int a) { age = a; }
};

// 포인터를 통하여 멤버접근하기
int main(){

    // Dog 객체를 동적으로 생성하고 포인터 pDog가 이를 가리킴
    Dog *pDog = new Dog;
    cout << "강쥐나이" << pDog->getAge() << endl;

    pDog->setAge(5);
    cout << "강쥐나이" << pDog->getAge() << endl;

    // (*pDog).getAge()하면 너무 불편함
    delete pDog;

    return 0;
}