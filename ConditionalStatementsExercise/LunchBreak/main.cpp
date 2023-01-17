#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string serial;
    getline(cin, serial);

    int timeSerial;
    cin >> timeSerial;

    int timeBreak;
    cin >> timeBreak;

    double totalTime = timeSerial + timeBreak * 1.0 / 8.0 + timeBreak * 1.0 / 4.0;

    if (totalTime <= timeBreak) {
        cout << "You have enough time to watch " << serial << " and left with " << ceil(timeBreak - totalTime) << " minutes free time." << endl;
    } else {
        cout << "You don't have enough time to watch " << serial << ", you need " << ceil(totalTime - timeBreak) << " more minutes." << endl;
     }

    return 0;
}