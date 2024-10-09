#include <iostream>
#define PI 3.14159

using namespace std;

// 원의 둘레와 면적을 계산하는 함수 정의
void calculateCircle(double radius, double &circumference, double &area) {
    circumference = 2 * PI * radius;  // 원의 둘레 계산
    area = PI * radius * radius;      // 원의 면적 계산
}

int main() {
    double radius, circumference, area;
    
    // 사용자로부터 반지름 입력 받기
    cout << "원의 반지름을 입력하세요: ";
    cin >> radius;
    
    // 함수 호출해서 둘레와 면적 계산
    calculateCircle(radius, circumference, area);
    
    // 결과 출력
    cout << "원의 둘레: " << circumference << endl;
    cout << "원의 면적: " << area << endl;
    
    return 0;
}