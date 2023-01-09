#include <iostream>

using namespace std;


int main() {
    int taxYear;
    cin >> taxYear;

    double sneakers = 0.6 * taxYear;
    double clothes = 0.8 * sneakers;
    double ball = 0.25 * clothes;
    double accessories = 0.2 * ball;
    double totalSum;

    totalSum = sneakers + clothes + ball + accessories + taxYear;

    cout << totalSum << endl;


    return 0;
}