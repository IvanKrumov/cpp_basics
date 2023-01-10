#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

int main() {
    double r, area, peremeter;

    cin >> r;

    area = r * r * M_PI;
    peremeter = 2 * r * M_PI;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << area << endl;
    cout << peremeter << endl;


    return 0;
}