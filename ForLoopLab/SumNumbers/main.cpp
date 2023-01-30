#include <iostream>

using namespace std;

int main() {
    int sumNumbers = 0;

    int numbersCount;
    cin >> numbersCount;

    for (int i = 1; i <= numbersCount; i++) {
        int number;
        cin >> number;
        sumNumbers += number;
    }

    cout << sumNumbers << endl;
    
    return 0;
}