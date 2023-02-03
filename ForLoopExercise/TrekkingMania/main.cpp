#include <iostream>

using namespace std;

int main() {
    int groupsCount;
    cin >> groupsCount;

    string peak;

    double totalMembers = 0;

    double forMusala = 0;
    double forMontblan = 0;
    double forKilimandzharo = 0;
    double forK2 = 0;
    double forEverest = 0;

    for (int i = 1; i <= groupsCount; i++) {
        int groupMembers;
        cin >> groupMembers;

        totalMembers += groupMembers;


        if(groupMembers <= 5) {
            forMusala += groupMembers;
        } else if(groupMembers >= 6 && groupMembers <= 12) {
            forMontblan += groupMembers;
        } else if(groupMembers >= 13 && groupMembers <= 25) {
            forKilimandzharo += groupMembers;
        } else if(groupMembers >= 26 && groupMembers <= 40) {
            forK2 += groupMembers;
        } else if(groupMembers >= 41) {
            forEverest += groupMembers;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << forMusala / totalMembers * 100 << "%" << endl; 
    cout << forMontblan / totalMembers * 100 << "%" << endl;
    cout << forKilimandzharo / totalMembers * 100 << "%" << endl;
    cout << forK2 / totalMembers * 100 << "%" << endl;
    cout << forEverest / totalMembers * 100 << "%" << endl;


    return 0;
}