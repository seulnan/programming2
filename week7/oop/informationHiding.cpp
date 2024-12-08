#include <iostream>
using namespace std;

class TV {
private:
    int volume;  // TV의 현재 볼륨 (외부에서 접근 불가)

public:
    TV() { volume = 10; }  // 초기 볼륨 설정

    void increaseVolume() {  // 인터페이스만 제공
        if (volume < 100) {
            volume++;
        }
    }

    void decreaseVolume() {  // 인터페이스만 제공
        if (volume > 0) {
            volume--;
        }
    }

    int getVolume() {  // 현재 볼륨 조회
        return volume;
    }
};

int main() {
    TV myTV;

    myTV.increaseVolume();  // 볼륨 증가
    myTV.decreaseVolume();  // 볼륨 감소

    cout << "현재 볼륨: " << myTV.getVolume() << endl;  // 출력: 10
    return 0;
}