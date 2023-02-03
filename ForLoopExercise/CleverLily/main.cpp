#include <iostream>

using namespace std;

int main() {
    int years;
    cin >> years;

    double priceWasher;
    cin >> priceWasher;

    int priceToy;
    cin >> priceToy;

    double sum = 0;
    
    int countToys = 0;
    int countMoney;
    int money = 0;
    int steal = 0;

    for (int  i = 1; i <= years; i++) {

        if ( i % 2 == 0) {
            money += 10;
            countMoney += money;
            steal++;
        } else {
            countToys += 1;
        }

    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if((countMoney - steal * 1 + (countToys * priceToy)) >= priceWasher) {
        cout << "Yes! " << (countMoney - steal * 1 + (countToys * priceToy)) - priceWasher << endl;
    } else {
        cout << "No! " << priceWasher -  (countMoney - steal * 1 + (countToys * priceToy)) << endl;
    }

    return 0;
}