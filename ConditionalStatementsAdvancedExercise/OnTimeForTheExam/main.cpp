#include <iostream>

using namespace std;

int main() {
    int hourE;
    int minE;
    int hourA;
    int minA;

    cin >> hourE >> minE >> hourA >> minA;

    int totalE = hourE * 60 + minE;
    int totalA = hourA * 60 + minA;
    

    if (totalA <= totalE) {
        if (totalA == totalE) {
            cout << "On time" << endl;
        } else if ((totalE - totalA) > 0 && (totalE - totalA) <= 30) {
            cout << "On time" << endl;
            cout << totalE - totalA << " minutes before the start" << endl;
        } else {
            cout << "Early" << endl;
            if (totalE - totalA < 60) {
                cout << totalE - totalA << " minutes before the start" << endl;
            } else {
                if ((totalE - totalA) % 60 < 10) {
                    cout << (totalE - totalA) / 60 << ":0" << (totalE - totalA) % 60 << " hours before the start" << endl;
                } else {
                    cout << (totalE - totalA) / 60<< ":" << (totalE - totalA) % 60 << " hours before the start" << endl;
                }
            }
        }
        
    } else {
        cout << "Late" << endl;
        if ((totalA - totalE) < 60) {
            cout << (totalA - totalE) << " minutes after the start" << endl;
        } else {
            if ((totalA - totalE) % 60 < 10) {
                cout << ((totalA - totalE)) / 60 << ":0" << (totalA - totalE) % 60 << " hours after the start" << endl;
            } else {
                cout << ((totalA - totalE)) / 60 << ":" << (totalA - totalE) % 60 << " hours after the start" << endl;
            }
        }
    }

    return 0;
}