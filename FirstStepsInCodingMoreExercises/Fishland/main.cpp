#include <iostream>

using namespace std;

int main() {
    double priceScumria;
    double priceCaca;
    double kgPalamud, pricePalamud;
    double kgSafrid, priceSafrid;
    int kgMidi;
    double priceMidi = 7.50;
    double sum;

    cin >> priceScumria >> priceCaca >> kgPalamud >> kgSafrid >> kgMidi;

    pricePalamud = 1.6 * priceScumria;
    priceSafrid = 1.8 * priceCaca;

    sum = pricePalamud * kgPalamud + priceSafrid * kgSafrid + kgMidi * priceMidi;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << sum << endl;


    return 0;
}