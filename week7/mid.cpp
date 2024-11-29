#include <iostream>
using namespace std;


struct Student{
    char name[20];
    int studentID;
    float grade[2];
};

int main()
{
    int arr[5];
    int *p = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << "arr[" << i << "]에 넣을 값을 입력해";
        cin >> *(p + i);
    }
    
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << *(p + i) << endl;  // 포인터 표기법으로 값 출력
    }
}
