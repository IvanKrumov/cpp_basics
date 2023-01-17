#include <iostream>

using namespace std;

int main() {
    double budget;
    cin >> budget;

    int cards;
    cin >> cards;

    int processors;
    cin >> processors;

    int dimms;
    cin >> dimms;

    double priceVideocard = 250.00;
    double priceProcessor = cards * priceVideocard * 0.35;
    double priceRAM = cards * priceVideocard * 0.10;

    double totalPrice = priceVideocard * cards + priceProcessor * processors + priceRAM * dimms;


    cout.setf(ios::fixed);
    cout.precision(2);

    if (cards > processors) {
        totalPrice = totalPrice * 0.85;
    }

    if (totalPrice <= budget) {
        cout << "You have " << budget - totalPrice << " leva left!" << endl;
    } else {
        cout << "Not enough money! You need " << totalPrice - budget << " leva more!" << endl;
    }

    
    return 0;
}