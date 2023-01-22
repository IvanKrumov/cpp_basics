#include <iostream>
#include <math.h>

using namespace std;
 
int main()
{
    double w;
    cin >> w;
    double h;
    cin >> h;
    double width = w * 100;
    double height = h * 100;
    double spaceWCorridor = height - 100;
    double brSeatsPerRow = (spaceWCorridor - fmod(spaceWCorridor, 70)) / 70;
    double brSeatsPerColum = (width - fmod(width, 120)) / 120;
    double allSeats = brSeatsPerRow * brSeatsPerColum - 3;
    cout << allSeats;
    return 0;
}