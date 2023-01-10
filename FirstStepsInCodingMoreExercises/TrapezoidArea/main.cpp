#include <iostream>

using namespace std;

int main() {
    double b1, b2, h, area;
    cin >> b1 >> b2 >> h;

    area = (b1 + b2) * h / 2;

    cout.setf(ios::fixed);      // set to numbers after the decimal point
    cout.precision(2);

    cout << area << endl;

    return 0;
}