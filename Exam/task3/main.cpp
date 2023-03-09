#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    double packageWeight;
    cin >> packageWeight;


    string serviceType;
    cin >> serviceType;

    int distance;
    cin >> distance;

    double pricePerKm = 0;
    double totalPrice = 0;
    double additonPercent = 0;

    if(serviceType == "standard") {
        if(packageWeight < 1) {
            pricePerKm = 0.03;
        } else if(packageWeight >= 1 && packageWeight <= 10) {
            pricePerKm = 0.05;
        } else if(packageWeight > 10 && packageWeight <= 40) {
            pricePerKm = 0.10;
        } else if(packageWeight > 40 && packageWeight <= 90) {
            pricePerKm = 0.15;
        } else if(packageWeight > 90 && packageWeight <= 150) {
            pricePerKm = 0.20;
        }
        totalPrice = pricePerKm * distance;
    } else if (serviceType == "express") {
        if (packageWeight < 1) {
            pricePerKm = 0.03;
            additonPercent = 80;
        } else if (packageWeight >= 1 && packageWeight <= 10) {
            pricePerKm = 0.05;
            additonPercent = 40;
        } else if (packageWeight > 10 && packageWeight <= 40) {
            pricePerKm = 0.10;
            additonPercent = 5;
        } else if (packageWeight > 40 && packageWeight <= 90) {
            pricePerKm = 0.15;
            additonPercent = 2;
        } else if (packageWeight > 90 && packageWeight <= 150) {
            pricePerKm = 0.20;
            additonPercent = 1;
        }
        double addPerKg = pricePerKm * additonPercent / 100;
        double addPerKm = packageWeight * addPerKg;
        double totalAdd = addPerKm * distance;
        totalPrice = pricePerKm * distance + totalAdd;
    }

    cout.setf(ios::fixed);
    cout << "The delivery of your shipment with weight of " << setprecision(3) << packageWeight 
                                    << " kg. would cost "  << setprecision(2) << totalPrice << " lv." << endl;



    return 0;
}