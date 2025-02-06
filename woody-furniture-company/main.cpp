//
// Seamus Lally
// 2/6/2025
// Woody Furniture Company Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    //declaring variables
    double americanNum, modernNum, frenchNum;
    double american, modern, french, costTotal ;
    double americanCost = 85;
    double modernCost = 57;
    double frenchCost = 127;

    //asking for the number of chairs sold
    cout << "How many people bought American Colonial chairs: ";
    cin >> americanNum;
    cout << "How many people bought Modern chairs: ";
    cin >> modernNum;
    cout << "How many people bought French Classical chairs: ";
    cin >> frenchNum;

    //calculating the income of the chairs sold
    american = americanCost * americanNum;
    modern = modernCost * modernNum;
    french = frenchCost * frenchNum;
    costTotal = american + modern + french;

    //displaing the totals
    cout << "the income from American Colonial chairs sales is $" << fixed << setprecision(2) << american <<endl;
    cout << "the income from Modern chairs sales is $" << fixed << setprecision(2) << modern <<endl;
    cout << "the income from French Classical chairs sales is $" << fixed << setprecision(2) << french <<endl;
    cout << "the total income from the chairs sales is $" << fixed << setprecision(2) << costTotal <<endl;
}
