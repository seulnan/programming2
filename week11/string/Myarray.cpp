#include <iostream>
using namespace std;

// 확장성을 위해 프로그램 내 다른 클래스나 함수에서 배열 크기를 SIZE에 맞춰 사용할 수 있습니다.
const int SIZE = 10;

class MyArray{
    int a[SIZE];
public:
    MyArray(){
        for (int i = 0; i < SIZE;i++)
            a[i] = 0;
    }

    int &operator[](int i){
        if(i>=SIZE || i<0){
            cout << "잘못된 인덱스:";
            // int 를 반환해야하기때문에 cout만 하면 안됨
            return a[0];
        }
        return a[i];
    }
};

int main(){
    MyArray A;

    A[3] = 9;
    cout << "A[3]=" << A[3] << endl;
    cout << "A[16]=" << A[16] << endl;

    return 0;
}