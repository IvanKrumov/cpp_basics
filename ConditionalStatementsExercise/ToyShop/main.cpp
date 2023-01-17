#include <iostream>

using namespace std;

int main() {
    double priceTrip;
    cin >> priceTrip;
    
    int puzzles;
    cin >> puzzles;

    int dolls;
    cin >> dolls;

    int bears;
    cin >> bears;

    int minions;
    cin >> minions;

    int trucks;
    cin >> trucks;

    int countToys = puzzles + dolls + bears + minions + trucks;
    double priceToys = puzzles * 2.60 + dolls * 3.00 + bears * 4.10 + minions * 8.20 + trucks * 2.00;

    if (countToys >= 50) {
        priceToys = priceToys * 0.75;
    }

    priceToys = priceToys * 0.90;


    cout.setf(ios::fixed);
    cout.precision(2);

    if (priceTrip <= priceToys) {
        cout << "Yes! " << priceToys - priceTrip << " lv left." << endl;
    } else {
        cout << "Not enough money! " << priceTrip - priceToys << " lv needed." << endl;
    }


    return 0;
}