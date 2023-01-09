#include <iostream>

using namespace std;

int main() {
    double priceChicken = 10.35;
    double priceFish = 12.40;
    double priceVeg = 8.15;
    double totalPrice, priceFood, priceDesert;

    int chicken, fish, veg;
    cin >> chicken >> fish >> veg;

    priceFood = chicken * priceChicken + fish * priceFish + veg * priceVeg;
    priceDesert = priceFood * 0.2;
    totalPrice = priceFood + priceDesert + 2.50;

    cout << totalPrice << endl;

    return 0;
}