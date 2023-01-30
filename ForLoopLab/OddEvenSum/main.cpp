#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int evenSum = 0;
    int oddSum = 0;

    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;

        if (i % 2 == 0) {
            evenSum += num;
        } else {
            oddSum += num;
        }
    }

    if (evenSum == oddSum) {
            cout << "Yes" << endl;
            cout << "Sum = " << evenSum << endl;
        } else {
            cout << "No" << endl;
            cout << "Diff = " << abs(evenSum - oddSum) << endl;

        }

    return 0;
}