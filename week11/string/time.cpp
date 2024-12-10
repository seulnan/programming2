#include <iostream>
using namespace std;

class Time{
    int hour, min, sec;
public:
    Time(int h = 0, int m=0, int s=0): hour(h), min(m), sec(s){}

    bool operator==(Time &t2){
        return (hour == t2.hour && min == t2.min && sec == t2.sec);
    }

    bool operator!=(Time &t2){
        return !(*this == t2);
    }
};

int main(){

    Time t1(1, 2, 3), t2(1, 2, 3);

    // boolalpha를 cout에 영구적으로 설정하는 명령어
    // cout << boolalpha는 해당라인이후만 적용됨
    cout.setf(cout.boolalpha);
    cout << (t1 == t2) << endl;
    cout << (t1 != t2) << endl;
    return 0;
}