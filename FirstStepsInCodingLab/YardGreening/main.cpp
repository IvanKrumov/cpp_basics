#include <iostream>

using namespace std;

int main() {
    double area, sum, discount;

    cin >> area;

    sum = area * 7.61 * 0.82;
    discount = area * 7.61 * 0.18;

    cout << "The final price is: " << sum << " lv." << endl;
    cout << "The discount is: " << discount << " lv." << endl;

    return 0;
}