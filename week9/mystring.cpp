#include <string.h>

class MyString{
private:
    char *s;  // 문자열을 저장할 동적 메모리의 주소
    int size;
public:
    MyString(char *c){
        size = strlen(c) + 1;  // 문자열의 길이를 구하고, '\0' 포함해서 +1
        s = new char[size];    // 문자열 저장을 위한 동적 메모리 할당
        strcpy(s, c);          // 전달된 문자열을 동적 메모리에 복사
    }
    ~MyString(){
        delete[] s;
    }
};

int main(){
    MyString str("abcdefghijk"); // MyString 객체 str 생성
}