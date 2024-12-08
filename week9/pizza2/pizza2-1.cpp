#include <iostream>
using namespace std;

// 객체가 함수의 매개변수로 전달되는경우
class Pizza{
public:     
    Pizza(int s):size(s){}
    int size;
};

void makeDouble(Pizza p){
    p.size *= 2;
}

int main(){
    Pizza pizza(10);
    makeDouble(pizza);
    cout << pizza.size << "인치 피자" << endl;
    return 0;
}
// 결과: 10인치 피자
// 객체를 함수로 전달하는 경우는 객체가 복사된다
// main 의 객체 pizza는 makeDouble함수의 매개변수 p 로 복사되는것이다
// 그래서 p의 size는 20으로 변경되었지만 main안 pizza의 size는 변경되지않음