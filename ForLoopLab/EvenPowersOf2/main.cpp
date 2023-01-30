#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int power;
    cin >> power;

    for (int i = 0; i <= power; i +=2 ) {
        // cout << i << endl;
        cout << pow(2, i) << endl;
    }

    return 0;
}