#include <iostream>
#include <climits>
#include <cmath>


using namespace std;

void readtext() {

    while (true) {
        string text;
        cin >> text;

       if (text == "Stop") {
        break;
       }

       cout << text << endl;

    }

    // return 0;
}


void password() {

    string userName;
    cin >> userName;

    string password;
    cin >> password;

    while (true) {
        string pass;
        cin >> pass;

        if(pass == password) {
            cout << "Welcome " << userName << "!" << endl;
            break;
        }
    }

}


void sumNumbers() {
    int number;
    cin >> number;

    int sum = 0;

    while(true) {
        int num;
        cin >> num;

        sum += num;

        if(sum >= number) {
            cout << sum << endl;
            break;
        }

    }

}


void sequence2kPlus1() {
    int number;
    cin >> number;

    int k = 1;

    while(k <= number) {
        cout << k << endl;
        k = k * 2 + 1;
        
    }
}


void accountBalance() {

    double moneySum = 0;

    while(true) {
        string text;
        cin >> text;

        cout.setf(ios::fixed);
        cout.precision(2);

        if (text == "NoMoreMoney") {
            cout << "Total: "<< moneySum << endl;
            break;
        } else {
            double amount = stod(text);
            if(amount < 0) {
                cout << "Invalid operation!" << endl;
                cout << "Total: "<< moneySum << endl;
                break;
            }
            cout << "Increase: " << amount << endl;
            moneySum += amount;
        }
    }
}


void maxNumber() {
    
    int maxNumber = INT_MIN;

    while(true) {
        string text;
        cin >> text;

        if (text == "Stop") {
            cout << maxNumber << endl;
            break;
        } else {
            int number = stod(text);
            if (number >= maxNumber) {
                maxNumber = number;
            }
        }
    }
}

void minNumber() {
    
    int minNumber = INT_MAX;

    while(true) {
        string text;
        cin >> text;

        if (text == "Stop") {
            cout << minNumber << endl;
            break;
        } else {
            int number = stod(text);
            if (number <= minNumber) {
                minNumber = number;
            }
        }
    }
}


void graduation() {
    string name;
    cin >> name;

    double clas = 0;
    double uspeh = 0;


    while (clas < 12) {
        double grade;
        cin >> grade;

        clas++;

        if (grade >= 4) {
            uspeh += grade;
        } else {
            cout << name << " has been excluded at " << clas << " grade" << endl;
            break;
        }
    }
    
    if (clas == 12) {
        cout.setf(ios::fixed);
        cout.precision(2);

        double avUspeh = uspeh / clas;
        cout << name << " graduated. Average grade: " << avUspeh << endl;
    }


}

int main() {
    graduation();

    return 0;
}