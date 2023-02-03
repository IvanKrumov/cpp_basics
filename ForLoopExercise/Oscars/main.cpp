#include <iostream>

using namespace std;

int main() {
    string nameActor;
    getline(cin, nameActor);

    double academyPoints;
    cin >> academyPoints;

    int judges;
    cin >> judges;


    double pointsJudge = 0;
    double totalPoints = academyPoints;



    for (int i = 0; i < judges; i++) {      

            string nameJudge;

            cin.ignore();
            getline(cin, nameJudge);

            double points;
            cin >> points;

            // double leghtName = nameJudge.length();

            totalPoints += nameJudge.length() * points / 2.0;

        if (totalPoints > 1250.5) {
            break;
        }


    }

	cout.setf(ios::fixed);
	cout.precision(1);

    if(totalPoints >= 1250.5) {
        cout << "Congratulations, " << nameActor << " got a nominee for leading role with " << totalPoints << "!" << endl;
    } else {
		        cout << "Sorry, " << nameActor << " you need " << 1250.5 - totalPoints << " more!" << endl;   
	}

    return 0;
}