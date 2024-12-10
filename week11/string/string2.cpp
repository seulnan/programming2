#include <iostream>
#include <string>
using namespace std;

class MyVector{
private:
    double x, y;
public: 
    MyVector(double x = 0.0, double y = 0.0): x(x), y(y) { }
    string toString(){
        return "(" + to_string(x) + "," + to_string(y) + ")";
    }
    MyVector operator+(const MyVector &v2); // 매개변수는 참조자
};

// + 연산자를 사용자정의로 구현
// 두 벡터객체를 더하기위해 +연산자를직접정의(operator+)하여 연산지원
MyVector MyVector::operator+(const MyVector &v2){

    MyVector v;
    v.x = this->x + v2.x;
    v.y = this->y + v2.y;
    return v;
}

int main(){

    MyVector v1(1.0, 2.0), v2(3.0, 4.0);
    // v1은 operator+를 호출하는 현재객체로 사용됨 
    // v2는 매개변수로 전달됨
    // const 는 v2를 읽기전용으로 설정해 함수 내부에서 데이터가 변경되지않도록 보장.
    MyVector v3 = v1 + v2;

    // 객체의 데이터를 출력하거나 디버깅할때, 
    // 객체를 보기좋은 형태로 표기하기위해 toString사용
    // cout은 기본적으로 객체를 출력할 수 없음
    cout << v1.toString() << "+" << v2.toString() << "=" << v3.toString() << endl;

    return 0;
}