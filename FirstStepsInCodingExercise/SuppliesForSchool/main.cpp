#include <iostream>

using namespace std;

int main() {
    int pens, markers, liters;
    double sum, discount;

    cin >> pens >> markers >> liters >> discount;

    discount =((100 - discount) / 100);

    sum = (pens * 5.80 + markers * 7.20 + liters * 1.20) * discount;

    cout << sum << endl;

    return 0;
}