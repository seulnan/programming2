#include "DocWriter.h"
#include "HTMLWriter.h"

int main(){

    // 자식 객체 생성
    HTMLWriter hw("test.html", "This is HTMLWriter content.");

    // 부모 클래스의 포인터로 가리킨다.
    DocWriter *pdw = &hw;

    pdw->Write();

    return 0;
}