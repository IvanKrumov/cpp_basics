#include <iostream>

using namespace std;


int main() {


    while(true) {
        string destination;
        cin >> destination;

        if(destination == "End") {
            break;
        }

        int price;
        cin >> price;

        int totalcost = 0;

        while(true) {
            int cost;
            cin >> cost;

            totalcost += cost;

            if(totalcost >= price) {
                cout << "Going to " << destination << "!" << endl;
                break;
            }
        }

    }

    return 0;
}