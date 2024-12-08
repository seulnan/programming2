#include <iostream>
using namespace std;


class Time{
private:
    int hour;
    int minute;

public:
    Time(int h = 0, int m = 0);
    void Print();
    void IncHour();
    void DecHour();
    void IncMinute();
    void DecMinute();
};