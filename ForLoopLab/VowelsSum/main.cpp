#include <iostream>

using namespace std;

int main() {
    string text;
    getline(cin, text);

    int textLenght = text.length();

    int sumVowels = 0;

    for (int i=0; i < textLenght; i++) {
        if(text[i] == 'a') {
            sumVowels += 1;
        } else if(text[i] == 'e') {
            sumVowels += 2;
        } else if(text[i] == 'i') {
            sumVowels += 3;
        } else if(text[i] == 'o') {
            sumVowels += 4;
        } else if(text[i] == 'u') {
            sumVowels += 5;
        }
    }

    cout << sumVowels << endl;
    
    return 0;
}