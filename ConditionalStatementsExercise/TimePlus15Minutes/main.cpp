#include <iostream>

using namespace std;


int main() {
    int hours, minutes;
    cin >> hours >> minutes;

    int totalmins = hours * 60 + minutes + 15;

    hours = totalmins / 60;
    minutes = totalmins % 60;

    if (hours >= 24) {
        hours -= 24;
    }

    if (minutes < 10) {
        cout << hours << ":0" << minutes << endl;
    } else {
        cout << hours << ":" << minutes << endl;
    }

    return 0;
}