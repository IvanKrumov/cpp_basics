#include <iostream>

using namespace std;

int main() {
    const double RENT_SPRING = 3000;
    const double RENT_SUMMER = 4200;
    const double RENT_AUTUMN = 4200;
    const double RENT_WINTER = 2600;

    const string SEASON_SPRING = "Spring";
    const string SEASON_SUMMER = "Summer";
    const string SEASON_AUTUMN = "Autumn";
    const string SEASON_WINTER = "Winter";

    int budget;
    string season;
    int fishermen;

    cin >> budget >> season >> fishermen;

    double cost = 0;

    if (season == SEASON_SPRING) {
        cost = RENT_SPRING;
    } else if (season == SEASON_SUMMER) {
        cost = RENT_SUMMER;
    } else if (season == SEASON_AUTUMN) {
        cost = RENT_AUTUMN;
    } else if (season == SEASON_WINTER) {
        cost = RENT_WINTER;
    }

    if (fishermen <= 6) {
        cost *= 0.9;
    } else if (fishermen >= 7 && fishermen <= 11) {
        cost *= 0.85;
    } else if (fishermen >= 12) {
        cost *= 0.75;
    }

    if (season != SEASON_AUTUMN && (fishermen % 2) == 0) {
        cost *= 0.95;
    }


    cout.setf(ios::fixed);
    cout.precision(2);

    if(cost <= budget) {
        cout << "Yes! You have " << budget - cost << " leva left." << endl;
    } else {
        cout << "Not enough money! You need " << cost - budget << " leva." << endl;
    }

    return 0;
}