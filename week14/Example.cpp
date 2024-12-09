#include "DynamicArray.h"
#include <iostream>
using namespace std;

int main(){
    DynamicArray arr(10);

    // for (int i = 0; i < 10; i++){
    //     arr.SetAt(i, (i + 1) * 10);
    // }

    // cout << "size of arr" << arr.GetSize() << "`n" ;

    // for (int i = 9; i >= 0; --i){
    //     cout << "arr[" << i << "]=" << arr.GetAt(i) << "`n";
    // }

    try{
        arr.SetAt(5, 100);
        arr.SetAt(8, 100);
        arr.SetAt(10, 100);
    }
    catch(const char* ex){
        cout << "예외종류: " << ex << "`n";
    }

    return 0;
}