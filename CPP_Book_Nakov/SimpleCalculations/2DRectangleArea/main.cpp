#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x1, x2, y1, y2;

    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;

    double a = fabs(x2 -x1);
    double b = fabs(y2 -y1);

    cout << "Area = " << a * b << endl;
    cout << "Perimeter = " << 2 * (a + b) << endl;

    return 0;
}