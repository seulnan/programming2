#include <iostream>
using namespace std;

int main(){

    int A, B, C, D;
    A = B = C = D = 3;

    int ppA, Bpp, mmC, Dmm;
    ppA = ++A;
    Bpp = B++;
    mmC = --C;
    Dmm = D--;

    cout << "A: " << A << ", ppA: " << ppA << ", B: " << B << ", Bpp: " << Bpp << ", C: " << C << ", mmC: " << mmC << ", D: " << D << ", Dmm: " << Dmm << endl;

    return 0;
}