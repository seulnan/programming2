#include <iostream>
using namespace std;


class Pizza{
public:     
    Pizza(int s):size(s){}
    int size;
};

// 객체의 참조자가 함수의 매개변수로 전달되는경우
void makeDouble(Pizza& p){
    p.size *= 2;
}

int main(){
    Pizza pizza(10);
    makeDouble(pizza);
    cout << pizza.size << "인치 피자" << endl;
    return 0;
}
// 결과: 20인치 피자
// 참조자로 객체를 받으면 객체의 이름이 하나 더 생기는것과 같다
// 참조자를 통하여 객체를 변경하면 원 객체를 변경한다
// 일반적으로 객체를 전달할 경우에는 참조자를 전달하는 편이 더 효율적이다
// 다만, 이때 원 객체가 영향을 받으면 안되는 상황인지를 체크할것