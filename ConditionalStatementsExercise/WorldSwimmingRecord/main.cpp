#include <iostream>
#include <cmath>

using namespace std;


int main() {
    double curr_record;
    double distance;
    double time_per_meter, V, add_time, total_time, times_slow;

    cin >> curr_record >> distance >> time_per_meter;



    times_slow = floor(distance / 15);

    if (distance >= 15) {
        add_time = (times_slow * 12.5);

    }

    // add_time = ceil((distance / 15 * 12.5));
    V = 1 / time_per_meter;

    total_time = (distance / V ) + add_time;

    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(2);

    if (total_time < curr_record) {
        cout << "Yes, he succeeded! The new world record is " << total_time  << " seconds." << endl;
    } else {
        cout << "No, he failed! He was " << total_time - curr_record << " seconds slower." << endl;
    }



    return 0;
}