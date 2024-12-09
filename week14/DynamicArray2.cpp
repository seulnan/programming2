#include "DynamicArray.h"
#include "MyException.h"

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
        throw MyException(this, "out of range!!", index);

    arr[index] = value;
}

int DynamicArray::GetAt(int index) const{
    
    if(index<0 || index >=GetSize())
        throw MyException(this, "out of range!!", index);

    return arr[index];
}

int DynamicArray::GetSize()const {
    return size;
}