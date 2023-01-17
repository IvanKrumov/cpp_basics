#include <iostream>

using namespace std;

int main() {
    string figure;
    cin >> figure;
    double area;

    if (figure == "square") {
        double a;
        cin >> a;
        area = a * a;
    } else if (figure == "rectangle") {
        double a, b;
        cin >> a >> b;
        area = a * b;
    } else if (figure == "circle") {
        double r;
        cin >> r;
        area = r * r * 3.14159265359;
    } else if (figure == "triangle") {
        double a, h; 
        cin >> a >> h;
        area = a * h / 2;
    }

    cout.setf(ios::fixed);
    cout.precision(3);

    cout << area << endl;

    return 0; 
}