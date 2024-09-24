#include <iostream>
using namespace std;

struct StudentInfo {
    char bloodType;
    int StdNumber;
    float grade;
};

int main() {
    StudentInfo sInfo[2];

    for (int i = 0; i < 2; i++) {
        cout << i + 1 << "번째 학생의 혈액형을 넣어주세요.\n";
        cin >> sInfo[i].bloodType;

        cout << i + 1 << "번째 학생의 학번을 넣어주세요.\n";
        cin >> sInfo[i].StdNumber;

        cout << i + 1 << "번째 학생의 성적을 넣어주세요.\n";
        cin >> sInfo[i].grade;
    }

    for (int i = 0; i < 2; i++) {
        cout << i + 1 << "번째 학생 정보:\n";
        cout << "혈액형: " << sInfo[i].bloodType << endl;
        cout << "학번: " << sInfo[i].StdNumber << endl;
        cout << "성적: " << sInfo[i].grade << endl;
    }

    return 0;
}