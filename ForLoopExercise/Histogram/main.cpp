#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    double p1 = 0;
    double p2 = 0; 
    double p3 = 0; 
    double p4 = 0; 
    double p5 = 0;

    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;



        if (num < 200) {
            p1++;
        } else if ( num >= 200 && num <= 399) {
            p2++;
        } else if ( num >= 400 && num <= 599) {
            p3++;
        } else if ( num >= 600 && num <= 799) {
            p4++;
        } else if  (num >= 800 ) {
            p5++;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << p1 / n * 100 << "%" << endl;
    cout << p2 / n * 100 << "%" << endl;
    cout << p3 / n * 100 << "%" << endl;
    cout << p4 / n * 100 << "%" << endl;
    cout << p5 / n * 100 << "%" << endl;


    return 0;
}