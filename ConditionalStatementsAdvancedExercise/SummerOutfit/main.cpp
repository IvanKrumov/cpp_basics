#include <iostream>

using namespace std;

int main() {
    int degrees;
    cin >> degrees;

    string timeDay;
    cin >> timeDay;

    string outfit, shoes;

    if (timeDay == "Morning") {
        if (degrees >= 10 && degrees <=18) {
            outfit = "Sweatshirt";
            shoes = "Sneakers";
        } else if (degrees > 18 && degrees <= 24) {
            outfit = "Shirt";
            shoes = "Moccasins";
        } else if (degrees >= 25) {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
    } else if (timeDay == "Afternoon") {
        if (degrees >= 10 && degrees <=18) {
            outfit = "Shirt";
            shoes = "Moccasins";
        } else if (degrees > 18 && degrees <= 24) {
            outfit = "T-Shirt";
            shoes = "Sandals";
        } else if (degrees >= 25) {
            outfit = "Swim Suit";
            shoes = "Barefoot";
        }
    } else if (timeDay == "Evening") {
        if (degrees >= 10 && degrees <=18) {
            outfit = "Shirt";
            shoes = "Moccasins";
        } else if (degrees > 18 && degrees <= 24) {
            outfit = "Shirt";
            shoes = "Moccasins";
        } else if (degrees >= 25) {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    }

    cout << "It's " << degrees << " degrees, get your " << outfit << " and " << shoes << "." << endl;



    return 0;
}