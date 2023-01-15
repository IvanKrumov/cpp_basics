#include <iostream>

using namespace std;

int main() {
    double usd, bgn;
    cin >> usd;

    bgn = usd * 1.79549;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << bgn << " BGN" << endl;

    return 0;
}