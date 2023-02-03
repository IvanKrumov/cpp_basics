#include <iostream>

using namespace std;

int main() {
    int openTabs;
    cin >> openTabs;

    double salary;
    cin >> salary;



    for ( int i = 1; i <= openTabs; i++) {

        if(salary > 0) {
            string site;
            cin >> site;
            if (site == "Facebook") {
                salary -= 150;
            } else if (site == "Instagram") {
                salary -= 100;
            } else if (site == "Reddit") {
                salary -= 50;
            }
        } else {
            cout << "You have lost your salary." << endl;
            break;
        }
    }

    if(salary > 0) {
        cout << salary << endl;
    }
    return 0;
}