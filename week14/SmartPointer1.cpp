#include <iostream>
using namespace std;

class SmartPointer{
public:
    SmartPointer(char*p):ptr(p){}

    ~SmartPointer(){
        // 소멸자가 호출되는 것을 확인한다
        cout << "메모리가 해제된다!\n";

        delete[] ptr;
    }
public:
    char *const ptr;
};

void CreateResource() {

}

int main() {
    try {
        
        char *p = new char[100];
        SmartPointer sp(p);
        cout << "예외발생전\n";

        throw "예외 발생!"; 
        
        cout << "예외발생후\n";

        // 메모리를 해제해줄 필요가없다
        // delete[] p;
        // p = NULL;
    } catch (const char& ex) {
        cout << "예외 처리: " << ex << endl;
    }
    return 0;
}