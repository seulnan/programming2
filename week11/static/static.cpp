#include <iostream>
using namespace std;

class Math {
public:
    // 정적 멤버 함수
    static int calculateSum(int a, int b) {
        int sum = a + b; // 지역 변수 sum
        return sum;      // 지역 변수를 반환
    }
};

int main() {
    // cout으로하면 result라는 변수에 담을수가없음
    // return 과 단순 cout의 차이 
    int result = Math::calculateSum(10, 20); // 정적 멤버 함수 호출
    cout << "결과: " << result << endl;
    return 0;
}