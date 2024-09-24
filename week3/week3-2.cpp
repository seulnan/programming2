//매우매우 중요

#include <iostream>
using namespace std;

struct StudentInfo{
    char bloodType;
    int StdNumeber;
    float grade;
};


int main()
{
    //StudentInfo 구조체 타입의 변수 2개 설정
    StudentInfo si1 = {
        'A',
        20210000,
        4.5f
    };
    // Remove the extra closing brace
    StudentInfo si2 = {
        '0',
        20210001,
        3.5f
    };

    cout << "학번: "<< si1.StdNumeber << "\n";
    cout << " 혈액형: " << si1.bloodType  << "\n";
    cout << " 학점: " << si1.grade <<  "\n\n";
    cout << "학번: "<< si2.StdNumeber << "\n";
    cout << " 혈액형: " << si2.bloodType  << "\n";
    cout << " 학점: " << si2.grade <<  "\n\n";

    return 0;
}