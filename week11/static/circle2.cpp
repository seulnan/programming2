#include <iostream>
using namespace std;

class Circle{
    int x, y, radius;
    static int count;
public:
    Circle() : x(0), y(0), radius(0) {
        count++;
    } 
    Circle(int x, int y, int r): x(x), y(y), radius(r){
        count++;
    } // x,y,r을 초기화할수있도록 매개변수를 받음
    ~Circle() { count--; }
    static int getCount(){
        return count; // 정적멤버함수는 정적변수(count)와 함수내부지역변수만 사용가능
    }
};

int Circle::count = 0;

int main(){
    Circle c1;
    cout << "지금까지 생성된 원의개수=" << Circle::getCount() << endl;

    Circle c2(100, 100, 30);
    cout << "지금까지 생성된 원의 개수 = " << Circle::getCount() << endl;

    return 0;
}