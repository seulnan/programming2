#include "DynamicArray.h"

DynamicArray::DynamicArray(int arraySize){
    arr = new int[arraySize];
    size = arraySize;
}

DynamicArray::~DynamicArray(){
    delete[] arr;
    arr = 0;
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