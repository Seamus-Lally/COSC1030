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
    //declaring variables
    string coin;
    double pennies = 0;
    double nickels = 0;
    double dimes = 0;
    double quarters = 0;
    int pennies_Add, nickels_Add, dimes_Add, quarters_Add;
    double total = 0;

    //stating the rules
    cout << "Your goal is to get exactly one dollar. \nEnter penny, nickel, dime, or quarter, than the amount of them you want to add.\n";

    //collecting users coins
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
        } else if (coin == "done" || coin == "Done"){
            break;
        }else{
            cout << "invalid input. \n";
        }
    }
    //calculating total
    total = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (quarters * 0.25);
    //printing results
    if (total == 1){
        cout << "You win. \n";
    }else if (total <= 1){
        cout << "You were under a dollor by $" << fixed << setprecision(2) << (1 - total) << endl;
    }else{
        cout << "You were over a dollor by $" << fixed << setprecision(2) << (total - 1) << endl;
    }
}

