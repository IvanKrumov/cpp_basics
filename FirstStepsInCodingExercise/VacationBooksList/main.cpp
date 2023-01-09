#include <iostream>
 
 using namespace std;

int main () {
    int bookPages;
    int pagesHour;
    int days;
    double hoursDay;

    cin >> bookPages >> pagesHour >> days;

    hoursDay = (bookPages / pagesHour) / days;

    cout << hoursDay << endl;



    return 0;
}