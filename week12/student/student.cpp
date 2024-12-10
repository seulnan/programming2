#include <iostream>
using namespace std;

// 학부생
class UnderGradStudent{
public:
    string name, department;
};

// 긱사생 
class DormStudent{
public:
    string building;
    int roomNumber;
};

class UnderGrad_DormStudent:public UnderGradStudent, public DormStudent{
    

public:
};

int main(){
    // 긱사생이면서 학부생인 사람의 정보생성
    UnderGrad_DormStudent std;
    std.name = "nancy";
    std.department = "cse";
    std.building = "namjekwan";
    std.roomNumber = 1529;

    return 0;
};