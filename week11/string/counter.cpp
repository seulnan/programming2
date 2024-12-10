#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter() : value(0) {}
    ~Counter(){}
    int getValue() const { return value; }
    void setValue(int x) { value = x; }
    Counter& operator++(){
        ++value;
        // this는 자기를 가리키는 포인터이므로 *this는 객체 사진이 됨
        // ++(++c); 와 같은 수식이 가능하도록 *this를 반환하는 것
        return *this;
    }
};

int main() {

    Counter c;
    cout << "카운터의 값:" << c.getValue()<< endl;
    ++c;
    cout << "카운터의 값:" << c.getValue() << endl;

    return 0;
}       