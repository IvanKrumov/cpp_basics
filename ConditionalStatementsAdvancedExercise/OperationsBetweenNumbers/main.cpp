#include <iostream>

using namespace std;

int main() {
    int num1, num2, result;
    cin >> num1 >> num2;

    string operation;
    cin >> operation;

    if (operation == "/" || operation == "%") {
        if (num2 == 0) {
            cout << "Cannot divide " << num1 << " by zero" << endl;
        } else {
            if (operation == "/") {
            double result = double(num1) / double(num2);
            cout.setf(ios::fixed);
            cout.precision(2);
            cout << num1 << " " << operation << " " << num2 << " = " << result << endl;        
            } else {
                result = num1 % num2;
                cout << num1 << " " << operation << " " << num2 << " = " << result << endl;
                
            }
        } 
        
    } else {
        string evenOdd;

        if (operation == "+" ) {
            result = num1 + num2;
        } else if (operation == "-") {
            result = num1 - num2;
        } else if (operation == "*") {
            result = num1 * num2;
        }

        if (result % 2 == 0) {
            evenOdd = "even";
        } else {
            evenOdd = "odd";
        }


        cout << num1 << " " << operation << " " << num2 << " = " << result << " - " << evenOdd << endl;
    }


    return 0;
}