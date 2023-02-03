#include <iostream>
#include <climits>
#include <cmath>

using namespace std;


void tenisranklist() {

    int countTurniri;
    cin >> countTurniri;

    int initPoints, Points, countWon;
    cin >> initPoints;

    Points = 0;

    Points += initPoints;

    for (int i = 1; i <= countTurniri; i++ ) {
        string place;
        cin >> place;

        if(place == "W") {
            Points += 2000;
            countWon += 1;
        } else if(place == "F") {
            Points += 1200;
        } else if (place == "SF") {
            Points += 720;
        }
    }

    double percent = double(countWon) / double(countTurniri) * 100;

    cout << "Final points: " << Points << endl;
    cout << "Average points: " << (Points - initPoints) / countTurniri  << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << percent << "%" << endl;
}


int main() {
    tenisranklist();
}