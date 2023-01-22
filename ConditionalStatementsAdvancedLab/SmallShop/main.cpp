#include <iostream>

using namespace std;

int main() {
    string product;
    cin >> product;

    string city;
    cin >> city;

    double quantity;
    cin >> quantity;

    if (city == "Sofia") {
        if (product == "coffee") {
            cout << quantity * 0.50 << endl;
        } else if (product == "water") {
            cout << quantity * 0.80 << endl;
        } else if (product == "beer") {
            cout << quantity * 1.20 << endl;
        } else if (product == "sweets") {
            cout << quantity * 1.45 << endl;
        } else if (product == "peanuts") {
            cout << quantity * 1.60 << endl;
        }
    } else if (city == "Plovdiv") {
        if (product == "coffee") {
            cout << quantity * 0.40 << endl;
        } else if (product == "water") {
            cout << quantity * 0.70 << endl;
        } else if (product == "beer") {
            cout << quantity * 1.15 << endl;
        } else if (product == "sweets") {
            cout << quantity * 1.30 << endl;
        } else if (product == "peanuts") {
            cout << quantity * 1.50 << endl;
        }
    } else if (city == "Varna") {
        if (product == "coffee") {
            cout << quantity * 0.45 << endl;
        } else if (product == "water") {
            cout << quantity * 0.70 << endl;
        } else if (product == "beer") {
            cout << quantity * 1.10 << endl;
        } else if (product == "sweets") {
            cout << quantity * 1.35 << endl;
        } else if (product == "peanuts") {
            cout << quantity * 1.55 << endl;
        }
    }

    return 0;
}