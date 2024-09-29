#include <iostream>

int main() {
    //5개의 정수를 저장할 수 있는 배열 선언
    int arr[5];
    int* ptr = arr;

    for (int i = 0; i < 5; i++) {
        std::cout << "배열의 각 요소에 사용자가 입력한 값 할당: " << std::endl;
        std::cin >> *(ptr + i);
    }

    std::cout << "배열의 모든 요소를 출력: ";
    for (int i = 0; i < 5; i++) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;

    return 0;
}