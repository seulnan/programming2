#include "DynamicArray.h"
#include "MyException.h"
#include <iostream>
using namespace std;

int main(){
    DynamicArray arr1(10);
    DynamicArray arr2(8);
    // for (int i = 0; i < 10; i++){
    //     arr.SetAt(i, (i + 1) * 10);
    // }

    // cout << "size of arr" << arr.GetSize() << "`n" ;

    // for (int i = 9; i >= 0; --i){
    //     cout << "arr[" << i << "]=" << arr.GetAt(i) << "`n";
    // }

    try{
        arr1.SetAt(5, 100);
        arr2.SetAt(5, 100);
        arr1.SetAt(8, 100);
        arr2.SetAt(8, 100);
        arr1.SetAt(10, 100);
        arr2.SetAt(10, 100);
    }
    catch(MyException& ex){
        cout << "&arr1= " << &arr1 << "`n&arr2="<< &arr2<< "`n";

        cout << "예외를 던진 객체의 주소 = " << ex.sender << "`n";
        cout << "예외설명 = " << ex.description << "`n";
        cout << "부가정보= " << ex.info << "`n";
    }

    return 0;
}