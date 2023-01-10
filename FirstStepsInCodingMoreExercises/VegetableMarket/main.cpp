#include <iostream>

using namespace std;

int main() {
    double priceFruit, priceVeg, sum;
    int kilosFruit, kilosVeg;

    cin >> priceVeg >> priceFruit >> kilosVeg >> kilosFruit;

    sum = (priceVeg * kilosVeg  + priceFruit * kilosVeg) / 1.94;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << sum << endl;
 
    return 0;
}