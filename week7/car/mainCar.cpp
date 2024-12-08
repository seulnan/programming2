#include "car.h"
using namespace std;

int main(){

    Car myCar;

    myCar.setSpeed(80);
    cout << "현재속도" << myCar.getSpeed() << endl;

    return 0;
}