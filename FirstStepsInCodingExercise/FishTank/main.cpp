#include <iostream>

using namespace std;

int main() {
    int lenght, heigh, widht;
    double percentSand, V;
    cin >> lenght >> heigh >> widht >> percentSand;

    V = (lenght * widht * heigh * ((100 - percentSand) / 100) / 1000);

    cout << V << endl;


    return 0;
}