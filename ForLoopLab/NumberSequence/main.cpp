#include <iostream>
#include <climits>

using namespace std;

int main() {
    int maxNumber = INT_MIN;
    int minNumber = INT_MAX;

    int n;
    cin >> n;

    for (int i = 0; i <n; i++) {
        int num;
        cin >> num;

        if (num > maxNumber) {
            maxNumber = num;
        }

        if (num < minNumber) {
            minNumber = num;
        }
    }

    cout << "Max number: " << maxNumber << endl;
    cout << "Min number: " << minNumber << endl;

    return 0;
}