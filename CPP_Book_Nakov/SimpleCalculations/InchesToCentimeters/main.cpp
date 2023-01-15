#include <iostream>

using namespace std;

int main() {
    cout << "Inches = ";
    double inches;
    cin >> inches;

    double centemeters = inches * 2.54;
    cout << "Centimeters = ";
    cout << centemeters << endl;

    return 0;
}