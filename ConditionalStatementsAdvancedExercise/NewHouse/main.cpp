#include <iostream>

using namespace std;

int main() {
    string flowers;
    cin >> flowers;

    int countFlowers;
    cin >> countFlowers;

    int budget;
    cin >> budget;

    string ROSES = "Roses";
    string DAHALIAS = "Dahlias";
    string TULIPS = "Tulips";
    string NARCISSUS = "Narcissus";
    string GLADIOLUS = "Gladiolus";

    double totalPrice = 0.0;
    double priceFLower = 0.0;
    double discount = 0.0;

    bool isEnough = false;


    if (flowers == ROSES) {
        priceFLower = 5.00;
        if (countFlowers > 80) {
            discount = 10;
        }
    } else if (flowers == DAHALIAS) {
        priceFLower = 3.80;
        if (countFlowers > 90) {
            discount = 15;
        }
    } else if (flowers == TULIPS) {
        priceFLower = 2.80;
        if (countFlowers > 80) {
            discount = 15;
        }
    } else if (flowers == NARCISSUS) {
        priceFLower = 3.00;
        if (countFlowers < 120) {
            discount = -15;
        }
    } else if (flowers == GLADIOLUS) {
        priceFLower = 2.50;
        if (countFlowers < 80) {
            discount = -20;
        }
    }


    totalPrice = countFlowers * priceFLower * ((100.00 - discount) / 100.00);

    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalPrice <= budget) {
        cout << "Hey, you have a great garden with " << countFlowers << " " << flowers << " and " << budget - totalPrice << " leva left." << endl;
    } else {
        cout << "Not enough money, you need " << totalPrice - budget << " leva more." << endl;
    }
 

    return 0;
}