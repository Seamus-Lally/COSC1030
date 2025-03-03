//
// Seamus Lally
// 3/2/2025
// Pennies for Pay Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;
#include <iomanip>

int main(){
    //declaring variables
    int day;
    double penny = 0.005;
    double total = 0;
    //expalining what is happening
    cout << "you get paid a penny every day but your salary doubles every day.\n";
    //asking for the number of days
    while(true){
        cout << "Enter a number of days: ";
        cin >> day;
        if (day >= 1){
            break;
        }
        cout << "The number of days needs to be bigger than 0. \n";
        
    }
    //making table
    cout <<"Days\tTotal \n";
    for (int i = 1; i <= day; i++){
        penny = 2 * penny;
        total = total + penny;
        cout << i << "\t$" << fixed << setprecision(2) << penny << endl;
    }
    //printing total
    cout << "Your total pay after " << day << " days is $" << fixed << setprecision(2) << total << endl;
}

