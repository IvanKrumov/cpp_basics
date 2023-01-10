#include <iostream>

using namespace std;

int main() {
    double a, h, area;
    cin >> a >> h;

    area = (a * h) /2;

    cout.setf(ios::fixed);      // set to numbers after the decimal point
    cout.precision(2);

    cout << area << endl;

    return 0;
}