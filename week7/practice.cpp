#include <iostream>
using namespace std;

char *ReverseString(const char *src, int len) {
    char *reverse = new char[len + 1];

    for (int i = 0; i < len; i++){
        reverse[i] = src[len - i - 1];
    }

    reverse[len] = NULL;
    return reverse;
};

