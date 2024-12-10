#include "DynamicArray.h"
using namespace std;

DynamicArray::DynamicArray(int arraySize){
    try{
        arr = new int[arraySize];
        size = arraySize;

        // 여기서 고의로 예외를 발생시킨다
        throw MemeoryException(this, 0);
    }
    catch(...){
        cout << "여기는 실행됨\n";
        delete[] arr; // 리소스 정리
        throw; // 에외는 그대로 던짐
    }
}

DynamicArray::~DynamicArray(){

    try{
        delete[] arr;
        arr = 0;
    }
    catch(...){
        
    }

}

void DynamicArray::SetAt(int index, int value){
    if(index<0 || index >=GetSize())
        throw "out of range!";

    arr[index] = value;
}

int DynamicArray::GetAt(int index) const{
    
    if(index<0 || index >=GetSize())
        throw "out of range!";

    return arr[index];
}

int DynamicArray::GetSize()const {
    return size;
}