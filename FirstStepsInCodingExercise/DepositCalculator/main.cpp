#include <iostream>

using namespace std;

int main(){
    double deposit_sum, sum;
    int period;
    double interest;

    cin >> deposit_sum >> period >> interest;

    sum = deposit_sum + period * ((deposit_sum * (interest / 100)) / 12);

    cout << sum << endl;

    return 0;
}