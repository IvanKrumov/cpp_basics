#include <iostream>

using namespace std;

int main() {
    string fruit;
    cin >> fruit;

    string day;
    cin >> day;

    double quantity;
    cin >> quantity;

    double priceFruit, totalPrice;

    bool validInput = false;

    if (day == "Saturday" || day == "Sunday") {
        if (fruit == "banana") {
            priceFruit = 2.70;
        } else if (fruit == "apple") {
            priceFruit = 1.25;
        } else if (fruit == "orange") {
            priceFruit = 0.90;
        } else if (fruit == "grapefruit") {
            priceFruit = 1.60;
        } else if (fruit == "kiwi") {
            priceFruit = 3.00;
        } else if (fruit == "pineapple") {
            priceFruit = 5.60;
        } else if (fruit == "grapes") {
            priceFruit = 4.20;
        } else {
            validInput = true;
            // cout << "error" << endl;
        }
    } else if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Tuesday" || day == "Friday") {
        if (fruit == "banana") {
            priceFruit = 2.50;
        } else if (fruit == "apple") {
            priceFruit = 1.20;
        } else if (fruit == "orange") {
            priceFruit = 0.85;
        } else if (fruit == "grapefruit") {
            priceFruit = 1.45;
        } else if (fruit == "kiwi") {
            priceFruit = 2.70;
        } else if (fruit == "pineapple") {
            priceFruit = 5.50;
        } else if (fruit == "grapes") {
            priceFruit = 3.85;
        } else {
            validInput = true;
            // cout << "error" << endl;
        }
    } else {
        validInput = true;
        // cout << "error" << endl;
    }


    if (validInput) {
        cout << "error" << endl;
    } else {

    totalPrice = quantity * priceFruit;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalPrice << endl;

    }



    return 0;
}