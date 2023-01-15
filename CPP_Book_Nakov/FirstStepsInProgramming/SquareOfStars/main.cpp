#include <iostream>

using namespace std;
 
int main() {
    string symbol = "*";
    string space = " ";
    string repeat, repeatSp;
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++) {
            cout << "" << endl;
        for (int j = 1; j<=n; j++) {
            if (j == 1 || j == n) {
                cout << symbol;
             } else {
            //     cout << symbol <<  space << symbol;
                }
        }
    // repeat += symbol;
    // cout << repeat;
    // cout << "" <<endl;
    }
    
    cout << endl;

    return 0;
}