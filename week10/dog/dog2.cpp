#include <iostream>
using namespace std;

// 멤버 동적 생성
class Dog{
private:
    int *pWeight; // 강아지 무게를 저장하기 위한 동적 메모리 포인터
    int *pAge; // 고정된 멤버변수크기가 아니라 동적으로 메모리 할당, 유연성높음

public:
    Dog(){
    // 1.	new int는 힙 메모리에 정수 하나를 할당.
	// 2.	할당된 메모리의 주소가 pAge 포인터 변수에 저장.
	// 3.	new int(1)은 초기값 1로 설정.
        pAge = new int(1); 
        pWeight = new int(10); 
        // new는 새로운 메모리를 할당하고 그 주소를 반환
        // pWeight는 주소를 저장하는 포인터변수이므로 *를 사용하지않고 직접 주소 저장
        // *을 사용하면 포인터가 가리키는 그 값에 직접 저장하는거임
    }

    ~Dog(){
        delete pAge;
        delete pWeight;
    }
    int getAge() { return *pAge; } // 동적 메모리에 저장된 나이를 반환
    void setAge(int age) { *pAge = age; }
    int getWeight() { return *pWeight; }
    void setWeight(int weight) { *pWeight = weight; }
};

// 멤버 동적생성
int main(){

    // 객체 동적생성
    Dog *pDog = new Dog;
    cout << "강쥐나이" << pDog->getAge() << endl;

    pDog->setAge(5);
    cout << "강쥐나이" << pDog->getAge() << endl;
    delete pDog;

    return 0;
}