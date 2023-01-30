#include <iostream>

using namespace std;

int main() {
    string month;
    cin >> month;

    int nights;
    cin >> nights;

    double priceStudio, priceAp, totalPrie, discout;

    if (month == "May" || month == "October") {
        priceStudio = 50;
        priceAp = 65;
        if (nights > 14) {
        priceStudio *= 0.70;
        } else if (nights > 7) {
            priceStudio *= 0.95;
        }
    } else if (month == "June" || month == "September") {
        priceStudio = 75.20;
        priceAp = 68.70; 
        if (nights > 14) {
        priceStudio *= 0.80;
        }
    }  else if (month == "July" || month == "August") {
        priceStudio = 76;
        priceAp = 77;         
    }

    if (nights > 14) {
        priceAp *= 0.90;
    }


    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Apartment: " << nights * priceAp << " lv." << endl;
    cout << "Studio: " << nights * priceStudio << " lv." << endl;
    return 0;
}