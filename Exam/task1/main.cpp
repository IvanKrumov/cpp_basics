#include <iostream>

using namespace std;

int main() {
    int percentFats, percentProteins, percentCarbohydrates;
    cin >> percentFats >> percentProteins >> percentCarbohydrates;

    int calories;
    cin >> calories;

    int percentWater;
    cin >> percentWater;

    double gramsFats = percentFats * calories / 900.0;
    double gramsProteins = percentProteins * calories / 400.0;
    double gramsCarbohydrates = percentCarbohydrates * calories / 400.0;

    double totalGrams = gramsFats + gramsProteins + gramsCarbohydrates;

    double caloriesPerGram = (calories / totalGrams) * (100 - percentWater) / 100.0;

    cout.setf(ios::fixed);
    cout.precision(4);

    cout << caloriesPerGram << endl;


    return 0;
}