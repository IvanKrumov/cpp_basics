#include <iostream>

using namespace std;

int main() {
    double celsius, fahr;
    cin >> celsius;

    fahr = (celsius * (9.0/5.0)) + 32,00;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << fahr << endl;


    return 0;
}