#include <iostream>
#include <cstring>

// 20자 크기의 문자배열
const int MAX_NAME_LENGTH = 20;

// 학생 수 
const int MAX_STUDENTS = 5;

// 학생 구조체 정의
struct Student {
    char name[MAX_NAME_LENGTH];
    int studentID;
    float grades[2];
};

int main() {
    Student students[MAX_STUDENTS];

    // 모든 학생의 정보를 입력 받아 저장
    for (int i = 0; i < MAX_STUDENTS; i++) {
        std::cout << "학생 " << i+1 << "의 이름을 입력하세요: ";
        std::cin.getline(students[i].name, MAX_NAME_LENGTH);

        std::cout << "학생 " << i+1 << "의 학번을 입력하세요: ";
        std::cin >> students[i].studentID;

        std::cout << "학생 " << i+1 << "의 1학기 평점을 입력하세요: ";
        std::cin >> students[i].grades[0];

        std::cout << "학생 " << i+1 << "의 2학기 평점을 입력하세요: ";
        std::cin >> students[i].grades[1];

        std::cin.ignore(); // 버퍼 비우기
    }

    // 학번 입력받아 검색하여 일치하는 학생의 이름 출력
    int searchID;
    std::cout << "검색할 학번을 입력하세요: ";
    std::cin >> searchID;

    bool found = false;
    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (students[i].studentID == searchID) {
            std::cout << "일치하는 학생의 이름: " << students[i].name << std::endl;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "일치하는 학생을 찾을 수 없습니다." << std::endl;
    }

    return 0;
}