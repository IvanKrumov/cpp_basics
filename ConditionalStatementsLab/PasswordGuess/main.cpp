#include <iostream>

using namespace std;

int main() {
    string phrase;
    cin >> phrase;

    if (phrase == "s3cr3t!P@ssw0rd") {
        cout << "Welcome" << endl;
    } else {
        cout << "Wrong password!" << endl;
    }

    return 0;
}