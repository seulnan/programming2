#include <iostream>
#include <string>
using namespace std;

// 클래스 선언만 (인터페이스만 제공)
// 멤버변수와 멤버함수의 목록만 정의 (구체적인 구현정의는 없음)
// 다른파일에서 car class를 사용할수있도록 구조제공
class Car{

    int speed;
    int gear;
    string color;

public:
    int getSpeed();
    void setSpeed(int s);
};