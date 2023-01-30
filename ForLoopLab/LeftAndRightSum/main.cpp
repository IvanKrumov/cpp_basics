#include <iostream>
#include <cmath>

using namespace std;



int main() {
    int leftSum = 0;
    int rightSum = 0;

    int n;
    cin >> n;

    for (int i = 1; i <= 2 * n; i++ ) {
        int num;
        cin >> num;
        
        if ( i <= n) {
            leftSum += num;
        } else {
            rightSum += num;
        }
    }

    if (leftSum == rightSum) {
        cout << "Yes, sum = " << leftSum << endl;
    } else {
        cout << "No, diff = " << abs(leftSum - rightSum) << endl;
    }


    return 0;
}