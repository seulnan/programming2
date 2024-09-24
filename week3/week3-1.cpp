#include <iostream>
#include <string>

int main() {
    char text[] = "aitnetop tse aitneics";
    
    
    int length = 0;
    while (text[length] != '\0') {
        length++;
    }

    for (int i = length - 1; i >= 0; i--) {
        std::cout << text[i];
    }

    std::cout << std::endl;

    return 0;
}