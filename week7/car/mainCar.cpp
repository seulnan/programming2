#include "car.h"
using namespace std;

// 클래스를 실제로 사용
// 선언(헤더파일)만 필요하며, 구현(소스파일)은 컴파일단계에서 링크됨
int main(){

    Car myCar;

    myCar.setSpeed(80);
    cout << "현재속도" << myCar.getSpeed() << endl;

    return 0;
}