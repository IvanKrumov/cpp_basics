#include <iostream>

using namespace std;

int main() {
    double a, b, h, area;
    cin >> a >> b >> h;

    area = (a + b) * h / 2.0;

    cout << "Trapezoid area = ";
    cout << area << endl;

    return 0;
}