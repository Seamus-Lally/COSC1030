//
// Seamus Lally
// 2/25/2025
// Change for a Dollar Game Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;
#include <iomanip>

int main(){
    string coin;
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int pennies_Add, nickels_Add, dimes_Add, quarters_Add;

    while (coin != "done" || coin != "Done"){
        cout << "Enter the type of coin: (Type done to stop) ";
        cin >> coin;
        if (coin == "penny" || coin == "Penny"){
            cout << "How many pennies do you want to add. ";
            cin >> pennies_Add;
            pennies += pennies_Add;
        } else if (coin == "nickel" || coin == "Nickel"){
            cout << "How many nickels do you want to add. ";
            cin >> nickels_Add;
            nickels += nickels_Add;
        } else if (coin == "dime" || coin == "Dime"){
            cout << "How many dimes do you want to add. ";
            cin >> dimes_Add;
            dimes += dimes_Add;
        } else if (coin == "quarter" || coin == "Quarter"){
            cout << "How many quarters do you want to add. ";
            cin >> quarters_Add;
            quarters += quarters_Add;
        } else if (coin != "done" || coin != "Done"){
            cout << "invalid input. \n";
        }
    }
}

