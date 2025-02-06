//
// Seamus Lally
// 2/4/2025
// Stadium Seating Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    //declaring variables
    double aSeatNum, bSeatNum, cSeatNum;
    double aSeat, bSeat, cSeat, seatTotal ;
    double aSeatCost = 15;
    double bSeatCost = 12;
    double cSeatCost = 9;

    //asking for the number of tickets sold
    cout << "How many people bought seats for Class A: ";
    cin >> aSeatNum;
    cout << "How many people bought seats for Class B: ";
    cin >> bSeatNum;
    cout << "How many people bought seats for Class C: ";
    cin >> cSeatNum;

    //calculating the total sold
    aSeat = aSeatCost * aSeatNum;
    bSeat = bSeatCost * bSeatNum;
    cSeat = cSeatCost * cSeatNum;
    seatTotal = aSeat + bSeat + cSeat;

    //displaing the total
    cout << "the total income from seat sales is $" << fixed << setprecision(2) << seatTotal <<endl;
}
