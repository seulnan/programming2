#include "car.h"

// 구현 제공
// car클래스를 불러와서 멤버함수구현만 포함시킴 
// ::(범위지정연산자)를 사용하여 car클래스의 멤버함수임을 지정
int Car::getSpeed(){
    return speed;
}

void Car::setSpeed(int s){
    speed = s;
}