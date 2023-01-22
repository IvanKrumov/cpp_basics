#include <iostream>

using namespace std;

int main() {
    double budget;
    cin >> budget;

    int nights;
    cin >> nights;

    double pricePerNight;
    cin >> pricePerNight;

    int addPercent;
    cin >> addPercent;

    double totalPrice, addtionalMoney, nightPrice;

    cout.setf(ios::fixed);
    cout.precision(2);

    addtionalMoney = budget * (addPercent / 100.00);
    
    nightPrice = nights * pricePerNight;

    if (nights > 7) {
        double nightPrice = totalPrice * 0.95;
    } 
    
    totalPrice = nightPrice + addtionalMoney;


    if (totalPrice <= budget) {
        cout << "Ivanovi will be left with " << budget - totalPrice << " leva after vacation." << endl; 
    } else { 
        cout << totalPrice - budget << " leva needed." << endl;
    }

    return 0;
}