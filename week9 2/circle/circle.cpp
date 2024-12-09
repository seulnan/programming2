#include <iostream>
using namespace std;

class Circle{
public:
    int x, y, radius;
    Circle(): x(0), y(0), radius(0){} // 매개변수가 없는 기본 생성자
    Circle(int x, int y, int r): x(x), y(y), radius(r){} // x,y,r을 초기화할수있도록 매개변수를 받음
    void print(){
        cout << "반지름:" << radius << "@(" << x << "," << y << ")" << endl;
    }
};

int main(void){
    Circle objArray[10]; // 총 10개의 circle 객체를 저장할 공간 생성

    for (Circle& c: objArray){
        c.x = rand() % 500; // 0부터 499 랜덤값 생성
        c.y = rand() % 300;
        c.radius = rand() % 100;
    }
    for (Circle &c: objArray) // 범위기반 for문 
    // 인덱스없이도 배열이나 컨테이너 요소순회가능
    // 매개변수로 입력된 circle객체를 objArray(반복대상)만큼 순회하겠다는 뜻
    // for (요소_타입 요소_변수 : 반복_대상_컨테이너) 
        c.print();

    return 0;
}

// 왜 기본 생성자와 매개변수 생성자를 둘 다 사용하는가?
// 기본생성자: 매개변수 없이 객체를 생성하고, 객체의 멤버를 기본값으로 초기화할 때 사용
// 매개변수생성자: 특정한 값을 가지는 객체를 생성해야 할 때.
// 배열과같은 구조에서 기본생성자는 반드시 있어야함 (선언과 동시에 객체를 초기화해야함)
// 매개변수생성자로 유연한 초기화 가능 