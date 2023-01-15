#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

int main() {
    double r, area, perimeter;

    cout << "Enter cirle radius. r = ";
    cin >> r;

    area = r * r * M_PI;
    perimeter = 2 * M_PI * r;

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

    return 0;
}