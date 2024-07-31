#include <iostream>
#include <cmath>
using std:: cout;
using std:: cin;
using std:: endl;

int main() {
    int carA, carB ;
    cout<< "What is the speed of Car A in Miles per Hour ? " << endl ;
    cin>> carA ;
    cout<< "What is the speed of Car B in Miles per Hour ? " << endl ;
    cin>> carB ;
    int hours , minutes ;
    cout<< " How long did they dive in hours ?" << endl
        << " How long did they dive in minutes ? " << endl ;
    cin>> hours >> minutes ;
    double timeConversion = 60 ;
    int newTime = hours * timeConversion ;
    double speedConversion1 = carA / timeConversion , speedConversion2 = carB / timeConversion;
    //cout << speedConversion2 <<endl<< speedConversion1 ;
    double distance1 = (newTime+minutes) * speedConversion1 , distance2 = (newTime+minutes) * speedConversion2 ;
    double distanceOfCars = distance1 - distance2 ;
    cout<< " Here is how far apart they are from each other. " << endl
        << abs(distanceOfCars) ;
    return 0;
}
