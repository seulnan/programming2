#include <iostream>

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 10 != 0) {
            sum += i;
        }
    }

    std::cout << "합: " << sum << std::endl;

    return 0;
}