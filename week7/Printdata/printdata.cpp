#include <iostream>
using namespace std;

class PrintData{
public:
    void print(int i) { cout << i << endl; }
    void print(double f) { cout << f << endl; }
    void print(string s = "No data!") { cout << s << endl; }
};

int main(){
    PrintData obj;

    obj.print(1);
    obj.print(3.21);
    obj.print("tlqkf");
    obj.print();

    return 0;
}