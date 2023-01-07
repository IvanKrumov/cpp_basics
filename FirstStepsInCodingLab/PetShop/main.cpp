#include <iostream>

using namespace std;

int main () {
    int dogsFood, catsFood;
    double sum;

    cin >> dogsFood >> catsFood;

    sum = dogsFood * 2.50 + catsFood * 4.00;

    cout << sum << endl;


    return 0;
}