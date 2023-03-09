#include <iostream>
#include <climits>

using namespace std;

int main() {
    int number;
    cin >> number;

    int maxValue = INT_MIN;

    bool validCombination = false;

    for (int a=0; (a < 9) && !validCombination; a++) {  
        for (int b = 9; (b > a) && !validCombination; b--) {
            for (int c = 0; (c < 9) && !validCombination; c++) {
                for (int d = 9; (d > c) && !validCombination; d--) {
                    int product = a * b * c * d;
                    int sum = a + b + c + d;
                    if (product == sum && number % 10 == 5 && sum != 0) {
                        cout << a << b << c << d << " ";
                        validCombination = true;
                    } else if(product / sum == 3 && number % 3 == 0) {
                        cout << d << c << b << a << " ";
                        validCombination = true;
                    } 
                }
            }
        }
    }

    if(validCombination == false) {
        cout << "Nothing found" << endl;
    }

    return 0;
}