#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int people;
    cin >> people;

    double ticket;
    cin >> ticket;

    double priceSunbed;
    cin >> priceSunbed;

    double priceUmbrela;
    cin >> priceUmbrela;

    int countUmbrela = ceil(people * 0.5);
    int countSunbed = ceil(people * 0.75);

    double totalSum = people * ticket + priceSunbed * countSunbed + priceUmbrela * countUmbrela;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalSum << " lv." << endl;


    return 0;
}