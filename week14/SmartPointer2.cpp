#include "DynamicArray.h"
#include <iostream>
#include <stdexcept> // std::out_of_range 사용

using namespace std;

DynamicArray::DynamicArray(int arraySize) {
    try {
        arr = new int[arraySize]; // 동적 배열 할당
        size = arraySize;

        // 고의로 예외를 발생시킴
        throw runtime_error("Memory allocation failed!");
    } catch (...) {
        cout << "예외 발생: 리소스 정리 실행\n";
        delete[] arr; // 할당된 메모리 정리
        throw;        // 예외를 다시 던짐
    }
}

DynamicArray::~DynamicArray() {
    delete[] arr; // 안전하게 메모리 해제
    arr = nullptr;
}

void DynamicArray::SetAt(int index, int value) {
    if (index < 0 || index >= GetSize()) {
        throw out_of_range("Index out of range!");
    }
    arr[index] = value;
}

int DynamicArray::GetAt(int index) const {
    if (index < 0 || index >= GetSize()) {
        throw out_of_range("Index out of range!");
    }
    return arr[index];
}

int DynamicArray::GetSize() const {
    return size;
}