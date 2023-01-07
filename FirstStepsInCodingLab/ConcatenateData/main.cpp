#include <iostream>

using namespace std;

int main() {
    string firstName, lastName, city;
    int age;

    cin >> firstName >> lastName >> age >> city;


    cout << "You are " << firstName << " " << lastName << ", a " << age << "-years old person from " << city << "." << endl;

    return 0;
}