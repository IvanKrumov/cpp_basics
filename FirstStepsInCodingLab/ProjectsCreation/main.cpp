#include <iostream>

using namespace std;

int main() {
    string archName;
    int projects;

    cin >> archName >> projects;

    cout << "The architect " << archName << " will need " << projects * 3 << " hours to complete " << projects << " project/s." << endl;

    return 0;
}