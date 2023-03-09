#include <iostream>

using namespace std;


// void clock1() {

//     for(int i = 0; i < 24; ++i) {
//         for(int j = 0; j < 60; ++j) {
//             cout << i << ":" << j << endl;
//         }
//     }
// }


// void multiplicationTable() {

//     for(int i = 1; i <= 10; ++i) {
//         for(int j = 1; j <= 10; ++j) {
//             cout << i << " * " << j << " = " << i * j << endl;
//         }
//     }
// }


// void combinations() {

//     int number;
//     cin >> number;

//     int sumNumbers = 0;

//     for(int i = 0; i <= number; i++) {
//         for(int j = 0; j <= number; j++) {
//             for(int k = 0; k <= number; k++) {
//                 if((i + j + k) == number) {
//                     sumNumbers += 1;
//                 }
//             }
//         }
//     }

//     cout << sumNumbers << endl;
// }


// void sumOfTwoNumbers() {
//     int beginInterval;
//     cin >> beginInterval;

//     int endInterval;
//     cin >> endInterval;

//     int magicNumber;
//     cin >> magicNumber;

//     int counterComb = 0;
//     int countNotcomb = 0;

//     bool testTriger = false;

//     int valueA = 0;
//     int valueB = 0;

//     for(int i = beginInterval; i <= endInterval; i++) {
//         for(int j = beginInterval; j <= endInterval; j++) {
//             counterComb += 1;
//             if((i + j == magicNumber)) {
//                 testTriger = true;
//                 valueA = i;
//                 valueB = j;
//                 break;
//             } else {
//                 countNotcomb++;
//             }
               
//         }
//         if(testTriger) {
//             cout << "Combination N:" << counterComb << " ("<< valueA << " + " << valueB << " = " << magicNumber <<")"<< endl;
//             break;
//         } 
//     }

//     if(testTriger == false) {
//         cout << countNotcomb << " combinations - neither equals " << magicNumber << endl;
//     }   
// }

void traveling() {


    while(true) {
        string destination;
        cin >> destination;

        if(destination == "End") {
            break;
        }

        int price;
        cin >> price;

        int totalcost = 0;

        while(true) {
            int cost;
            cin >> cost;

            totalcost += cost;

            if(totalcost >= price) {
                cout << "Going to " << destination << "!" << endl;
                break;
            }
        }

    }
}


// void building() {
    
//     int stores;
//     cin >> stores;

//     int apartments;
//     cin >> apartments;

//     string indexAp;

//     for (int i = stores; i > 0; i-- ) {
//         for (int j = 0; j < apartments; j++) {
//             if(i == stores) {
//                 indexAp = "L";
//             } else if(i % 2 != 0) {
//                 indexAp = "A";
//             } else if(i % 2 == 0) {
//                 indexAp = "O";
//             }
//             cout << indexAp << i << j << " ";
            
//         }
//         cout << endl;
//     }



// }


int main() {

    traveling();

    return 0;
}