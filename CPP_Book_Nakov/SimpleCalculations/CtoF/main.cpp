#include <iostream>

using namespace std;

int main() {
    double celsius, fahr;
    cin >> celsius;

    fahr = (celsius * 1.8) + 32;

    cout << fahr << endl;

    return 0;
}