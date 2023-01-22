#include <iostream>

using namespace std;

int main() {
    string city;
    cin >> city;

    double sales;
    cin >> sales;

    double interest;
    double commision;

    bool invalidInput = false;

    if (city == "Sofia") {
        if (sales >= 0 && sales <=500) {
            interest = 0.05;
        } else if (sales > 500 && sales <=1000) {
            interest = 0.07;
        } else if (sales > 1000 && sales <= 10000) {
            interest = 0.08;
        } else if (sales > 10000) {
            interest = 0.12;
        } else {
            invalidInput = true;
        }
    } else if (city == "Varna") {
        if (sales >= 0 && sales <=500) {
            interest = 0.045;
        } else if (sales > 500 && sales <=1000) {
            interest = 0.075;
        } else if (sales > 1000 && sales <= 10000) {
            interest = 0.10;
        } else if (sales > 10000) {
            interest = 0.13;
        } else {
            invalidInput = true;
        }
    } else if (city == "Plovdiv") {
        if (sales >= 0 && sales <=500) {
            interest = 0.055;
        } else if (sales > 500 && sales <=1000) {
            interest = 0.08;
        } else if (sales > 1000 && sales <= 10000) {
            interest = 0.12;
        } else if (sales > 10000) {
            interest = 0.145;
        } else {
            invalidInput = true;
        }
    } else {
        invalidInput = true;
    }

    commision = sales * interest;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (invalidInput) {
        cout << "error" << endl;
    } else {
        cout << commision << endl;
    }

    return 0;
}