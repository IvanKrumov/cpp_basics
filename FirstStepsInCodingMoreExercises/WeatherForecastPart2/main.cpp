#include <iostream>

using namespace std;

int main() {
    double degrees;
    cin >> degrees;

    if(degrees >= 26.00 && degrees <= 35) {
        cout << "Hot" << endl;
    } else if (degrees > 20 && degrees < 26.00) {
        cout << "Warm" << endl;
    } else if (degrees >= 15.00 && degrees <= 20.00) {
        cout << "Mild" << endl;
    } else if (degrees >= 12 && degrees < 15.00) {
        cout << "Cool" << endl;
    } else if (degrees >=5 && degrees < 12) {
        cout << "Cold" << endl;
    } else {
        cout << "unknown" << endl;
    }

    return 0;
}