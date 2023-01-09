#include <iostream>

using namespace std;

int main() {
    double usd;
    cin >> usd;


    cout.setf(ios::fixed);      // set to numbers after the decimal point
    cout.precision(2);

    cout << usd * 1.79549 << endl;


    return 0;
}