#include <iostream>
using namespace std;

class Complex{
public:
    double real, imag;
    Complex(double r= 0.0, double i = 0.0): real(r), imag(i){
        cout << "생성자호출";
        print();
    }

    ~Complex(){
        cout << "소멸자호출";
        print();
    }

    void print(){
        cout << real << "+" << imag << "i" << endl;
    }
};

// Complex::add로 할 필요가 없음
// 클래스 멤버함수가 아님 그냥 complex 클래스를 반환하는 
// 클래스 외부의 독립적인 함수임
Complex add(Complex c1, Complex c2){
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main (){
    Complex c1(1, 2), c2(3, 4);
    Complex t;
    t = add(c1, c2);
    t.print();
    return 0;
}