//매우매우 중요

#include <iostream>
using namespace std;

void Convert2Bin(int dec){
    // 10진수가 0보다 작거나 같으면 종료
    if (dec <=0)
        return;

    // 10진수를 2로 나눈 값을 인자로 다시 호출
    Convert2Bin(dec/2);

    // 10진수를 2로 나눈 나머지를 출력
    cout << dec % 2;
}

int main()
{
    // 13을 이진수로 반환
    Convert2Bin(13);

    cout << "\n";
    return 0;
}