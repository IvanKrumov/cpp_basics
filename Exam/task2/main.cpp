#include <iostream>

using namespace std;

int main() {
    double daylyPocket;
    cin >> daylyPocket;

    double daylyProfit;
    cin >> daylyProfit;

    double totalSpendings;
    cin >> totalSpendings;

    double giftPrice;
    cin >> giftPrice;

    double totalMoney = daylyPocket * 5 + daylyProfit * 5 - totalSpendings;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalMoney >= giftPrice) {
        cout << "Profit: "<< totalMoney << " BGN, the gift has been purchased." << endl;
    } else {
        cout << "Insufficient money: " << giftPrice - totalMoney << " BGN." << endl;
    }

    return 0;
}