#include <iostream>

using namespace std;

int main() {
    int first, second, third;
    cin >> first >> second >> third;

    int sum = first + second + third;

    int min = sum / 60;
    int sec = sum % 60;

    if (sec < 10) {
        cout << min << ":0" << sec << endl;
    } else {
        cout << min << ":" << sec << endl;
    }



    return 0;
}