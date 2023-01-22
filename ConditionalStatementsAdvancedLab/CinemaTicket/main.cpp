#include <iostream>

using namespace std;

int main() {
    string day;
    cin >> day;

    if (day == "Wednesday" || day == "Thursday") {
        cout << "14" << endl;
    } else if (day == "Saturday" || day == "Sunday") {
        cout << "16" << endl;
    } else {
        cout << "12" << endl;
    }

    return 0;
}