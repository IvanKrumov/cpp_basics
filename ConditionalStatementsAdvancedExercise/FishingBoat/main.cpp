// Not working solution !!!
#include <iostream>

using namespace std;

int main() {
    int budget;
    cin >> budget;

    string season;
    cin >> season;

    int countAnglers;
    cin >> countAnglers;

    double totalSum = 0.0;

    const string SPRING = "Spring";
    const string SUMMER = "Summer";
    const string AUTUMN = "Autumn";
    const string WINTER = "Winter";

    double priceBoat, discount;

    if (season == SPRING) {
        priceBoat = 3000.00;
        if (countAnglers <=6) {
            discount = 0.9;
        } else if (countAnglers >= 7 && countAnglers <= 11) {
            discount = 0.85;
        } else if (countAnglers >= 12) {
            discount = 0.75;
        }
    } else if (season == SUMMER) {
        priceBoat = 4200.00;
        if (countAnglers <=6) {
            discount = 0.9;
        } else if (countAnglers >= 7 && countAnglers <= 11) {
            discount = 0.85;
        } else if (countAnglers >= 12) {
            discount = 0.75;
        }
    } else if (season == AUTUMN) {
        priceBoat = 4200.00;
        if (countAnglers <=6) {
            discount = 0.9;
        } else if (countAnglers >= 7 && countAnglers <= 11) {
            discount = 0.85;
        } else if (countAnglers >= 12) {
            discount = 0.75;
        }
    } else if (season == WINTER) {
        priceBoat = 2600.00;
        if (countAnglers <=6) {
            discount = 0.9;
        } else if (countAnglers >= 7 && countAnglers <= 11) {
            discount = 0.85;
        } else if (countAnglers >= 12) {
            discount = 0.75;
        }
    }

    if ((countAnglers % 2) == 0 && season != AUTUMN) {
        discount += 0.05;
    }


    totalSum = priceBoat * discount;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalSum <= budget) {
        cout << "Yes! You have " << budget - totalSum << " leva left." << endl;
    } else {
        cout << "Not enough money! You need " << totalSum - budget << " leva." << endl;
    }
    

    return 0;
}