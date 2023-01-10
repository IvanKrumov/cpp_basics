#include <iostream>

using namespace std;

int main() {
    double x, y, h;
    double areaWalls, areaRoof;
    double greenPaint, redPaint;

    cin >> x >> y >> h;

    areaWalls = (2 *( x + y)) * x - (2.0 * 1.2 + 2 * (1.5 * 1.5));
    areaRoof = 2 * (x * h / 2) + 2 * x * y;

    greenPaint = areaWalls / 3.4;
    redPaint = areaRoof / 4.3;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << greenPaint << endl;
    cout << redPaint << endl;

    return 0;
}