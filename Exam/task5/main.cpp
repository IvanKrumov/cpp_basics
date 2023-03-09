#include <iostream>

using namespace std;

int main() {
    int dailyGoal;
    cin >> dailyGoal;

    double dailyIncome = 0;

    while(true) {

        string command;
        cin >> command;

        if(command == "closed") {
            if(dailyIncome < dailyGoal) {
                cout <<  "Target not reached!" << " You need " << dailyGoal - dailyIncome << "lv. more." << endl;
                cout << "Earned money: " << dailyIncome << "lv." << endl;
                break;
            } else {
                cout << "You have reached your target for the day!" << endl;
                cout << "Earned money: " << dailyIncome << "lv." << endl;
                break;
            }
       
        }



        if(command == "haircut") {
            string clientType;
            cin >> clientType;
            if(clientType == "mens") {
                dailyIncome += 15;
            } else if (clientType == "ladies") {
                dailyIncome += 20;
            } else if (clientType == "kids") {
                dailyIncome += 10;
            }
        } else if(command == "color") {
            cin.ignore();
            string colorType;
            getline(cin, colorType);
            if(colorType == "touch up") {
                dailyIncome += 20;
            } else if (colorType == "full color") {
                dailyIncome += 30;
            }
        }
        if(dailyIncome >= dailyGoal) {
            cout << "You have reached your target for the day!" << endl;
            cout << "Earned money: " << dailyIncome << "lv." << endl;
            break;
        }
    }


    return 0;
}