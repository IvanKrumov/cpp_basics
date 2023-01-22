#include <iostream>

using namespace std;

int main() {
    double age;
    cin >> age;
    char sex;
    cin >> sex;

    if ( sex == 'm') {
        if (age >= 16 ) {
            cout << "Mr." << endl;
        } else {
            cout << "Master" << endl;
        }
    } else if (sex == 'f') {
        if (age >= 16) {
            cout << "Ms." << endl;
        } else {
            cout << "Miss" << endl;
        }
    }

    return 0;
}