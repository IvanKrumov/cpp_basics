#include <iostream>

using namespace std;

int main() {
    string plant;
    cin >> plant;

    if (plant == "banana" || plant == "apple" || plant == "kiwi" || 
                    plant == "cherry" || plant == "lemon" || plant == "grapes") {
        cout << "fruit" << endl;                
    } else if (plant == "tomato" || plant == "cucumber" || plant == "pepper" || plant == "carrot") {
        cout << "vegetable" << endl;
    } else {
        cout << "unknown" << endl;
    }

    return 0;
}