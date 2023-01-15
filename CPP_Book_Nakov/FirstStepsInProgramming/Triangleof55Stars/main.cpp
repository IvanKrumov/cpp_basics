#include <iostream>

using namespace std;

int main() {
  string name = "*";
  string repeat;

    for(int j = 1; j <= 10; j++) {
    repeat += name;
    cout << repeat;
    cout << "" <<endl;
        }
    
    return 0;
}