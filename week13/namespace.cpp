namespace Dog{
    // 단순데이터구조이므로 struct를 사용 
    struct Info{
        char name[20];
        int age;
    };
    Info dogs[20]; // 멍멍이 리스트
    int count; // 전체 멍멍이들의 수 
    void CreateAll(); // 모든 멍멍이 생성함수
}

namespace Cat{
    // 행동을 포함하므로 struct말고 class사용해서 캡슐화
    class Info{
        public:
            void Meow();
        protected:
            char name[20];
    };
    Info cats[20]; // 야옹이 리스트
    int count; // 전체 야옹이들의 수 
    void CreateAll(); // 모든 야옹이 생성함수
}

int count;

int main(){
    Cat::CreateAll();

    Cat::cats[0].Meow();

    Dog::CreateAll();

    int dog_count = Dog::count;

    return 0;
}