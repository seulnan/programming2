#include <iostream>

using namespace std;

// 별 패턴을 출력하는 함수 정의
void printStarPattern(int lines) {
    for (int i = 1; i <= lines; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int lines;
    
    // 사용자로부터 라인 수 입력 받기
    cout << "출력할 라인 수를 입력하세요: ";
    cin >> lines;
    
    // 함수 호출하여 패턴 출력
    printStarPattern(lines);
    
    return 0;
}