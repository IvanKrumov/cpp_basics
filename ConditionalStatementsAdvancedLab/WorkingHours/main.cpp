#include <iostream>

using namespace std;

int main() {
    int hour;
    cin >> hour;

    string day;
    cin >> day;

    if ( hour < 10 || hour > 18 || day == "Sunday") {
        cout << "closed" << endl;
    } else {
        cout << "open" << endl;
    }

    return 0;
}