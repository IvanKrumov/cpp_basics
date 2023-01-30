#include <iostream>

using namespace std;

int main() {
    int days;
    cin >> days;
    int nights = days -1;

    string room;

    cin.ignore();
    getline(cin, room);

    string rating;
    cin >> rating;

    double priceNight;

    double totalPrice;

    if (days < 10) {
        if (room == "room for one person") {
            priceNight = 18.00;
        } else if(room == "apartment") {
            priceNight = 25.00 * 0.70;
        } else if (room == "president apartment") {
            priceNight = 35.00 * 0.90;
        }
    } else if (days >= 10 && days <= 15) {
        if (room == "room for one person") {
            priceNight = 18.00;
        } else if(room == "apartment") {
            priceNight = 25.00 * 0.65;
        } else if (room == "president apartment") {
            priceNight = 35.00 * 0.85;
        }
    } else if (days > 15) {
        if (room == "room for one person") {
            priceNight = 18.00;
        } else if(room == "apartment") {
            priceNight = 25.00 * 0.50;
        } else if (room == "president apartment") {
            priceNight = 35.00 * 0.80;
        }
    }

    totalPrice = nights * priceNight;

    if (rating == "positive") {
        totalPrice *= 1.25;
    } else if (rating == "negative") {
        totalPrice *= 0.90;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalPrice << endl;

    return 0;
}