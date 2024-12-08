#include <iostream>
using namespace std;


class Pizza{
public:     
    Pizza(int s):size(s){}
    int size;
};

// 함수가 객체를 반환하는 경우
// 객체의 내용이 복사될 뿐 원본이 전달되진않음
Pizza createPizza(){
    Pizza p(10);
    return p;
}

int main(){
    Pizza pizza = createPizza();
    cout << pizza.size << "인치 피자" << endl;
}
// 결과: 10인치 피자
// createPizza()는 함수안에서 정의된 객체변수 p를 반환하지만, 
// p가 전달되는것이 아니라 p의 내용이 복사됨
// main에서 createPizza 의 반환값을 받는 변수인 pizza로 복사됨