#include <iostream>

using namespace std;

int main() {
    double nylon;
    double paint;
    double razreditel;
    double hoursWork;

    cin >> nylon >> paint >> razreditel >> hoursWork;

    double priceNylon = 1.50;
    double pricePaint = 14.50;
    double priceRazreditel = 5.00;
    double sumMaterials, sumWork, totalSum;

    sumMaterials = (nylon + 2.00) * priceNylon + (paint * pricePaint * 1.1) + (razreditel * priceRazreditel) + 0.40;
    sumWork = sumMaterials * 0.30 * hoursWork;
    totalSum = (sumMaterials + sumWork);

    cout << totalSum << endl;

    return 0;
}