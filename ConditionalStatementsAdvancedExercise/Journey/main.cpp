#include <iostream>

using namespace std;

int main() {
    double budget;
    cin >> budget;

    string season;
    cin >> season;

    string destination, stay;

    double cost;

    if (budget <= 100) {
        destination = "Bulgaria";
        if (season == "summer") {
            stay = "Camp";
            cost = budget * 0.30;
        } else {
            stay = "Hotel";
            cost = budget * 0.70;
        }
    } else if (budget <= 1000) {
        destination = "Balkans";
        if (season == "summer") {
            stay = "Camp";
            cost = budget * 0.40;
        } else {
            stay = "Hotel";
            cost = budget * 0.80;
        }
    } else {
        destination = "Europe";
        stay = "Hotel";
        cost = budget * 0.90;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Somewhere in " << destination << endl;
    cout << stay << " - " << cost << endl;


    return 0;
}