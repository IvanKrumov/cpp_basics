#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double w, h, area, area_left, area_path;
    double lenght_path, countDesc;
    double lenDesc, widDesc;
    double count;

    cin >> w >> h;

    lenDesc = w / 1.20;
    widDesc = (h - 1.0) / 0.70;

    count = floor(lenDesc) * floor(widDesc) - 3;


    cout << count << endl;


    return 0;
}