#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

void pool() {
    int countPeople = 0;
    cin >> countPeople;

    double entryPrice = 0;
    cin >> entryPrice;

    double sunBedPrice = 0;
    cin >> sunBedPrice;

    double umbrellaPrice = 0;
    cin >> umbrellaPrice;

    // Calculate the total price for the pool
    double totalPrice = countPeople * entryPrice;

    // Calculate the total price for the sunbeds
    double totalSunbedPrice = ceil((countPeople * 0.75)) * sunBedPrice;

    // Calculate the total price for the umbrellas
    double totalUmbrellaPrice = ceil((countPeople * 0.50)) * umbrellaPrice;

    // Calculate the total price for the pool
    double totalPoolPrice = totalPrice + totalSunbedPrice + totalUmbrellaPrice;


    cout.setf(ios::fixed);
    cout.precision(2);

    // Print the total price for the pool
    cout << totalPoolPrice << " lv." << endl;

}


void FamilyTrip() {
    double budget = 0;
    cin >> budget;

    double litersFuel = 0;
    cin >> litersFuel;

    string day = "";
    cin >> day;

    double totalPrice = litersFuel * 2.10 + 100;


    if (day == "Saturday") {
        totalPrice *= 0.90;
    } else if (day == "Sunday") {
        totalPrice *= 0.80;
    }

    if (budget >= totalPrice) {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Safari time! Money left: " << budget - totalPrice << " lv." << endl;
    } else {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Not enough money! Money needed: " << totalPrice - budget << " lv." << endl;
    }

}

void TravelAgency() {
    string town = "";
    cin >> town;

    string package = "";
    cin >> package;

    string vip = "";
    cin >> vip;

    int days = 0;
    cin >> days;

    double price = 0;

    if (days > 7) {
        days -= 1;
    }

    if (town == "Bansko" || town == "Borovets") {
        if (package == "withEquipment") {
            price = days * 100;
            if (vip == "yes") {
                price *= 0.90;
            }
        } else if (package == "noEquipment") {
            price = days * 80;
            if (vip == "yes") {
                price *= 0.95;
            }
        }
        if (days < 1) {
            cout << "Days must be positive number!" << endl;
        } else if (price > 0) {
            cout.setf(ios::fixed);
            cout.precision(2);
            cout << "The price is " << price << "lv! Have a nice time!" << endl;
        } else {
            cout << "Invalid input!" << endl;
        }
    } else if (town == "Varna" || town == "Burgas") {
        if (package == "withBreakfast") {
            price = days * 130;
            if (vip == "yes") {
                price *= 0.88;
            }
        } else if (package == "noBreakfast") {
            price = days * 100;
            if (vip == "yes") {
                price *= 0.93;
            }
        }
        if (days < 1) {
            cout << "Days must be positive number!" << endl;
        } else if (price > 0) {
            cout.setf(ios::fixed);
            cout.precision(2);
            cout << "The price is " << price << "lv! Have a nice time!" << endl;
        } else {
            cout << "Invalid input!" << endl;
        }
    } else {
        cout << "Invalid input!" << endl;
    }

}

void FitnessCenter() {
    int visitors = 0;
    cin >> visitors;

    int countBack = 0;
    int countChest = 0;
    int countLegs = 0;
    int countAbs = 0;
    int countProtein = 0;
    int countProteinBar = 0;

    int countTrain = 0;
    int countBuy = 0;

    string activity = "";

    cin.ignore();

    for (int i = 0; i < visitors; i++) {
        getline(cin, activity);
        if (activity == "Back") {
            countBack++;
            countTrain++;
        } else if (activity == "Chest") {
            countChest++;
            countTrain++;
        } else if (activity == "Legs") {
            countLegs++;
            countTrain++;
        } else if (activity == "Abs") {
            countAbs++;
            countTrain++;
        } else if (activity == "Protein shake") {
            countProtein++;
            countBuy++;
        } else if (activity == "Protein bar") {
            countProteinBar++;
            countBuy++;
        }
    }
    cout << countBack << " - back" << endl;
    cout << countChest << " - chest" << endl;
    cout << countLegs << " - legs" << endl;
    cout << countAbs << " - abs" << endl;
    cout << countProtein << " - protein shake" << endl;
    cout << countProteinBar << " - protein bar" << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << ((countTrain * 1.0) / visitors) * 100 << "% - work out" << endl;
    cout << ((countBuy * 1.0) / visitors) * 100 << "% - protein" << endl;
}


void club() {
    double desiredProfit;
    cin >> desiredProfit;


    double currentProfit = 0;

    cin.ignore();
    

    while(true) {
        string coctailName;
        getline(cin, coctailName);


        if (coctailName != "Party!") {
            int countCoctails;
            cin >> countCoctails;
            int currentOrder = coctailName.length() * countCoctails;
            currentProfit += currentOrder;
            if (currentOrder % 2 != 0) {
                currentProfit -= currentOrder * 0.25;
            }
            if(currentProfit >= desiredProfit) {
                cout.setf(ios::fixed);
                cout.precision(2);
                cout << "Target acquired." << endl;
                cout << "Club income - " << currentProfit << " leva." << endl;
                break;
            }
        } else {
            if(currentProfit >= desiredProfit) {
                cout.setf(ios::fixed);
                cout.precision(2);
                cout << "Target acquired." << endl;
                cout << "Club income - " << currentProfit << " leva." << endl;
                break;
            } else {
                cout.setf(ios::fixed);
                cout.precision(2);
                cout << "We need " << desiredProfit - currentProfit << " leva more." << endl;
                cout << "Club income - " << currentProfit << " leva." << endl;
                break;
            }
        }
        cin.ignore();
    }
}

void EasterCompetition() {
    int countKozunaci;
    cin >> countKozunaci;

    int maxPoints = INT_MIN;

    string winner = "";
    int points = 0;

    cin.ignore();

    for (int i = 0; i < countKozunaci; i++){
        string nameCook;
        getline(cin, nameCook);

        while(true) {

            string command;
            cin >> command;

            if (command == "Stop") {
                break;
            } else {
                points += stod(command);
            }     
        }

        cin.ignore();

        cout << nameCook << " has " << points <<" points." << endl;
        if(points > maxPoints) {
            maxPoints = points;
            winner = nameCook;
            cout << nameCook << " is the new number 1!" << endl;
        }

        points = 0;
        
    }
    cout << winner << " won competition with " << maxPoints << " points!" << endl;

}

int main() {
    EasterCompetition();
}