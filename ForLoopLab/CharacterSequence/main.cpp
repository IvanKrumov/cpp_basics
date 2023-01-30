#include <iostream>

using namespace std;

int main() {
    string text;
    getline(cin, text);

    int textLenght = text.length();

    for (int i=0; i < textLenght; i++) {
        cout << text[i] << endl;
    }
    return 0;
}