#include <iostream>

using namespace std;

int main() {
    double budged;
    cin >> budged;

    int statists;
    cin >> statists;

    double priceCostume;
    cin >> priceCostume;

    double decorPrice = budged * 0.10;

    if (statists > 150) {
        priceCostume = priceCostume * 0.90;
    }

    double totalPrice = decorPrice + statists * priceCostume;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalPrice > budged) {
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << totalPrice - budged << " leva more." << endl; 
    } else {
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << budged - totalPrice << " leva left." << endl;
    }

    return 0;
}