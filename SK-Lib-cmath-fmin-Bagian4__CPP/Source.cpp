#include <iostream>
#include <cmath>
#include <conio.h>

/*
    Source by Programiz
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main() {
    double x = -2.05, y = NAN, hasil;

    hasil = fmin(x, y);
    cout << "fmin(x, y) = " << hasil << endl;

    _getch();
    return 0;
}