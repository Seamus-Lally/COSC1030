//
// Seamus Lally
// 2/11/2025
// Time Calculator Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //declaring the variables
    double time;
    double min = 60;
    double hour = 3600;
    double day = 86400;

    // asking for the number of seconds
    cout << "Put in a number of seconds: ";
    cin >> time;

    //determining what time format and displaing it
    if (time >= day)
        cout << "The lenght of time in days is " << fixed << setprecision(2) << time/day << endl;
    else if (time >= hour)
        cout << "The lenght of time in hours is " << fixed << setprecision(2) << time/hour << endl;
    else if (time >= min)
        cout << "The lenght of time in minute is " << fixed << setprecision(2) << time/min << endl;
    else
        cout << "The lenght of time in seconds is " << time << endl; 



}
