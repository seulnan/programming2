#include <iostream>
using namespace std;

class Time{
private:
    int hour, minute;
public:
    Time(int h, int m);
    void inc_hour();
    void print();

    int getHour() { return hour; }
    int getMinute() { return minute; }
    int setHour(int h) { hour = h; }
    int setMinute(int m) { minute = m; }
};

void Time::inc_hour(){
    ++hour;
    if(hour>23)
        hour = 0;
}

int main(){
    Time a{0, 0};

    a.setHour(6);
    a.setMinute(10);

    a.print();
    return 0;
}