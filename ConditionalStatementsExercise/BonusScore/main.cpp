#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;
    double bonus;

    if (number <=100) {
        bonus = number + 5;
    } else if (number > 100 && number <=1000) {
        bonus = number * 1.2;
    } else if (number > 1000) {
        bonus = number * 1.1;
    }

    if (number % 2 == 0) {
        bonus = bonus + 1;
    } else if (number % 5 == 0) {
        bonus = bonus + 2;
    }

    cout << bonus - number << endl;
    cout << bonus << endl;

    return 0;
}