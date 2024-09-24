#include <iostream>

int main() {
    int height = 5;

    for (int i = 1; i <= height; ++i) {
        // 공백 출력
        for (int j = i; j < height; ++j) {
            std::cout << " ";
        }
        // 별 출력
        for (int k = 1; k <= (2 * i - 1); ++k) {
            std::cout << "*";
        }
        // 줄 바꿈
        std::cout << std::endl;
    }

    return 0;
}