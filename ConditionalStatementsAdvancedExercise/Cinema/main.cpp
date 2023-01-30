#include <iostream>

using namespace std;

int main() {
    string projection;
    cin >> projection;
    
    int rows;
    cin >> rows;

    int colomns;
    cin >> colomns;

    double countSeats = rows * colomns;

    double priceSeat = 0.0;

    if (projection == "Premiere") {
        priceSeat = 12.00;
    } else if (projection == "Normal") {
        priceSeat = 7.50;
    } else if (projection == "Discount") {
        priceSeat = 5.00;
    }

    double totalIncome = countSeats * priceSeat;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalIncome << " leva" << endl;
    

    return 0;
}