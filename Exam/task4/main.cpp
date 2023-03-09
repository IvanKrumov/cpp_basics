#include <iostream>

using namespace std;

int main() {
    int modelsCount;
    cin >> modelsCount;

    double countSales = 0;
    double countRating = 0;


    for (int i=0; i < modelsCount; i++) {
        int infoNumber;
        cin >> infoNumber;

        double rating = infoNumber % 10;
        double sales = infoNumber / 10;

        // countSales += sales;
        countRating += rating;

        if(rating == 2) {
            countSales += 0;
        } else if (rating == 3) {
            countSales += sales * 0.5;
        } else if (rating == 4) {
            countSales += sales * 0.7;
        } else if (rating == 5) {
            countSales += sales * 0.85;
        } else if (rating == 6) {
            countSales += sales;
        }
    }

    double totalRating = countRating / modelsCount;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << double(countSales) << endl;
    cout << double(totalRating) << endl;

    return 0;
}