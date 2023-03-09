#include <iostream>

using namespace std;

void numberPyramid() {
    int n;
    cin >> n;

    int number = 1;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            if(number > n) {
                break;
            }
            cout << number << " ";
            number++;
        }
        cout << endl;
        if(number > n) {
            break;
        }
        
    }
}


void EqualSumsEvenOddPosition() {
    int number1;
    cin >> number1;

    int number2;
    cin >> number2;

    int newBase = 0;
    int newRest = 0;

    int sumEven = 0;
    int sumOdd = 0;

    int num = 0;

    for (int i = number1; i <= number2; i++) {
        num = i;
        for(int j = 0; j < 6; j++) {
            newBase = num / 10;
            newRest = num % 10;
            num = newBase;
            if (j % 2 == 0) {
                sumEven += newRest;
            } else {
                sumOdd += newRest;
            }
        }

        if(sumEven == sumOdd) {
            cout << i << " ";
        }
        sumEven = 0;
        sumOdd = 0;
    }
}

void SumPrimeNonPrime() {
    string number;
    cin >> number;

    int sumPrime = 0;
    int sumNonPrime = 0;

    while(number != "stop") {
        int num = stod(number);
        int newBase = 0;
        int newRest = 0;
        int counter = 0;

        for(int i = 0; i < 6; i++) {
            newBase = num / 10;
            newRest = num % 10;
            num = newBase;
            if(newRest == 0 || newRest == 1) {
                counter++;
            }
            if(newRest == 2 || newRest == 3 || newRest == 5 || newRest == 7) {
                counter++;
            }
        }

        if(counter == 6) {
            sumPrime += num;
        } else {
            sumNonPrime += num;
        }

        cin >> number;
    }

    cout << "Sum of all prime numbers is: " << sumPrime << endl;
    cout << "Sum of all non prime numbers is: " << sumNonPrime << endl;
}

int main() {
    SumPrimeNonPrime();

    return 0;
}