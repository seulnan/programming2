#include <iostream>
using namespace std;

class Circle{
    int x, y, radius;
public:
    // 정적변수 count를 사용해 객체 생성 및 소멸개수관리
    static int count;
    Circle() : x(0), y(0), radius(0) {
        count++;
    } 
    Circle(int x, int y, int r): x(x), y(y), radius(r){
        count++;
    } // x,y,r을 초기화할수있도록 매개변수를 받음
    ~Circle() { count--; }
};

int Circle::count = 0;

int main(){
    Circle c1;
    // count에 직접 접근하기 위해 Circle::count사용
    // c1.count로 접근하면 공유되는 변수임에도 개별값처럼 보일수있어 혼란초래
    cout << "지금까지 생성된 원의개수=" << Circle::count << endl;

    Circle c2(100, 100, 30);
    cout << "지금까지 생성된 원의 개수 = " << Circle::count << endl;

    return 0;
}