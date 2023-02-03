#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

    int maxNum = INT_MIN;

    for (int i = 1; i <=n; i++) {
        int num;
        cin >> num;

        sum += num;

        if (num > maxNum) {
            maxNum = num;
        }


    }

    if (sum == maxNum * 2) {
        cout << "Yes" << endl;
        cout << "Sum = " << maxNum << endl;;
    } else {
        cout << "No" << endl;
        cout << "Diff = " << abs(maxNum - (sum - maxNum)) << endl;
    }

    return 0;
}