#include <iostream>
#include <string>

using namespace std;


void oldBooks() {
    string book;
    getline(cin, book);

    int countBooks = 0;

    while(true) {
        string nextBook;
        getline(cin, nextBook);

        if (nextBook == "No More Books") {
            cout << "The book you search is not here!" << endl;
            cout << "You checked " << countBooks << " books." << endl;
            break;
        }

        if (nextBook == book) {
            cout << "You checked " << countBooks << " books and found it." << endl;
            break;
        }

        countBooks++;

    }

}


void examPreparation() {
    int badMarks;
    cin >> badMarks;

    int marksCount = 0;

    double totalMarks = 0;
    double totalProblem = 0;

    string lastProblem;

    while(true) {
        cin.ignore();
        string problem;
        getline(cin, problem);


        if(problem == "Enough") {
            break; 
        } else {
            lastProblem = problem;
        }

        int mark;
        cin >> mark;

        totalProblem++;
        totalMarks += mark;

        if (mark <= 4) {
            marksCount++;
        }

    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if(marksCount > badMarks) {
        cout << "You need a break, " << marksCount << " poor grades." << endl;
    } else {
        double avScore = totalMarks / totalProblem;
        cout << "Average score: " << avScore << endl;
        cout << "Number of problems: " <<  totalProblem << endl;
        cout << "Last problem: " << lastProblem << endl;
    }



}



void vacation() {
    double priceVacation;
    cin >> priceVacation;

    double currentBudget;
    cin >> currentBudget;

    double totalMoney = 0;

    int spendCounter = 0;
    int days = 0;


    while(true) {
        string operation;
        cin >> operation;

        days++;

        double amount;
        cin >> amount;

        if (operation == "save") {
            currentBudget += amount;
            spendCounter = 0;
            if(currentBudget >= priceVacation) {
                cout << "You saved the money for " << days << " days." << endl;
                break;
            }
        } else if (operation == "spend") {
            if (amount > currentBudget) {
                currentBudget = 0;
            } else {
                currentBudget -= amount;
                spendCounter++;
            }
        }

        if(spendCounter == 5) {
            cout << "You can't save the money." << endl;
            cout << days << endl;
            break;
        }
    }
}

void steps() {

    int totalSteps = 0;
    int steps;
    
    while(true) {
        string input;
        getline(cin, input);

        if (input != "Going home") {
            steps = stod(input);
            totalSteps += steps;
            if (totalSteps >= 10000) {
                cout << "Goal reached! Good job!" << endl;
                break;
            }
        } else {
            getline(cin, input);
            steps = stod(input);
            totalSteps += steps;
            if (totalSteps >= 10000) {
                cout << "Goal reached! Good job!" << endl;
                break;
            } else {
                cout << 10000 - totalSteps << " more steps to reach goal." << endl;
                break;
            }
        }
    }
}


void cents() {
    double change;
    cin >> change;


    int cents = change * 100;

    int coins = 0;

    while(true) {

        if (cents / 200 > 0 ) {
            coins += cents / 200;
            cents = cents % 200;
        } else if (cents / 100 > 0 ) {
            coins += cents / 100;
            cents = cents % 100;
        } else if (cents / 50 > 0 ) {
            coins += cents / 50;
            cents = cents % 50;
        } else if (cents / 20 > 0 ) {
            coins += cents / 20;
            cents = cents % 20;
        }else if (cents / 10 > 0 ) {
            coins += cents / 10;
            cents = cents % 10;
        }else if (cents / 5 > 0 ) {
            coins += cents / 5;
            cents = cents % 5;
        }else if (cents / 2 > 0 ) {
            coins += cents / 2;
            cents = cents % 2;
        }else if (cents / 1 > 0 ) {
            coins += cents / 1;
            cents = cents % 1;
        }

        if(cents == 0) {
            break;
        }

    }

    cout << coins << endl;
}




void cace() {
    int lenght;
    cin >> lenght;

    int width;
    cin >> width;

    int pieces = lenght * width;

    int pieceEaten = 0;

    while(true) {
        string input;
        cin >> input;

        if(input != "STOP") {
            pieceEaten += stod(input);
            if(pieceEaten >= pieces) {
                cout << "No more cake left! You need " << pieceEaten - pieces << " pieces more." << endl;
                break;
            }
        } else {
            if(pieceEaten > pieces) {
                cout << "No more cake left! You need " << pieceEaten - pieces << " pieces more." << endl;
                break;
            } else {
                cout << pieces - pieceEaten << " pieces are left." << endl;
                break;
            }
        }
    }
}


void mooving() {
    int lenght;
    cin >> lenght;

    int width;
    cin >> width;

    int height;
    cin >> height;

    int volume = lenght * width * height;

    int freeVolume = 0;

    while(true) {
        string input;
        cin >> input;

        if(input != "Done") {
            freeVolume += stod(input);
            if(freeVolume >= volume) {
                cout << "No more free space! You need " << freeVolume - volume << " Cubic meters more."<< endl;
                break;
            }
        } else {
            if(freeVolume > volume) {
                cout << "No more free space! You need " << freeVolume - volume << " Cubic meters more." << endl;
                break;
            } else {
                cout << volume - freeVolume << " Cubic meters left." << endl;
                break;
            }
        }
    }

}

int main() {
    mooving();
}