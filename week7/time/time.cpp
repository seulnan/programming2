#include <iostream>
using namespace std;

class Time {
public:
    int hour;
    int minute;

    // 디폴트 인수를 가진 생성자
    Time(int h=0, int m=0) {
        hour = h;
        minute = m;
    }

    void print() {
        cout << hour << ":" << minute << endl;
    }
};

int main() {
    Time t1;        // 매개변수 생략 -> 디폴트 값 사용 (0, 0)
    Time t2(10);    // minute은 생략 -> 디폴트 값 사용 (10, 0)
    Time t3(10, 25);// 모든 매개변수 지정

    t1.print();     // 출력: 0:0
    t2.print();     // 출력: 10:0
    t3.print();     // 출력: 10:25

    return 0;
}