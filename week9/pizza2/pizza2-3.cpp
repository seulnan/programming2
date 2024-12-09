#include <iostream>
using namespace std;


class Pizza{
public:     
    Pizza(int s):size(s){}
    int size;
};

// 함수가 객체를 반환하는 경우
// 객체의 내용이 복사될 뿐 원본이 전달되진않음
// 복사생성자가 호출된다. 
Pizza createPizza(){
    Pizza p(10); // 지역객체생성
    return p; // 객체 내용이 복사되어 반환됨(함수내부의 지역객체와는 별개임)
    // 함수가 종료되면 지역객체 p는 소멸하고 복사된 내용은 pizza에 유지됨
}

int main(){
    Pizza pizza = createPizza();
    cout << pizza.size << "인치 피자" << endl;
}
// 결과: 10인치 피자
// createPizza()는 함수안에서 정의된 객체변수 p를 반환하지만, 
// p가 전달되는것이 아니라 p의 내용이 복사됨
// main에서 createPizza 의 반환값을 받는 변수인 pizza로 복사됨