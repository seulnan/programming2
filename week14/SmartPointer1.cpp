#include <iostream>
using namespace std;

class SmartPointer {
public:
    SmartPointer(char* p) : ptr(p) {}

    ~SmartPointer() {
        cout << "메모리가 해제된다!\n";
        delete[] ptr;
    }

public:
    char* const ptr;
};

int main() {
    try {
        char* p = new char[100];
        SmartPointer sp(p);
        cout << "예외발생전\n";

        throw "예외 발생!"; 
        
        cout << "예외발생후\n";
    } catch (const char* ex) { // 예외 타입을 수정
        cout << "예외 처리: " << ex << endl;
    }
    return 0;
}
