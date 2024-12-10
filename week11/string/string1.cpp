#include <iostream>
#include <string>
using namespace std;

// string 클래스는 연산자중복을 사용하고있음
// 문자열객체끼리 +를 사용해 결합하거나, == 로 비교가능
// 사용자정의 없어도됨
int main(){
    string s1 = "Rogue One:";
    string s2 = "A Star Wars Story";

    string s3;
    s3 = s1 + s2;

    cout << "s1=" << s1 << endl;
    cout << "s2=" << s2 << endl;
    cout << "s1+s2=" << s3 << endl;
    // bool 값은 숫자 0 또는 1로 출력됨 
    // boolalpha 를 써야 true false로 출력됨
    cout << "s1==s2" << boolalpha << (s1 == s2) << endl;

    return 0;
};

// 중복할 수 없는 연산자 
// ::, ., .*, ?: