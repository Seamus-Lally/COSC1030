//
// Seamus Lally
// 1/28/2025
// Restaurant Bill Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

int main(){
    // Variable declarations
    double mealTotal;
    double taxTotal;
    double tipTotal;
    // Constants for the tax rate and tip percentage
    float taxPercent = 0.0675;
    double tipPercent = 0.20;
    // Get the amount of the purchase.
    double mealCost = 88.67;
    // Calculate the sales tax.
    taxTotal = mealCost * taxPercent; 
    // Calculate the tip.
    tipTotal = mealCost * tipPercent;
    // Calculate the total of the sale.
    mealTotal = mealCost + tipTotal + taxTotal;
    // Print information about the sale.
    cout << "The cost of the meal is:  " << mealCost << endl;
    cout << "The tax is:                " << taxTotal << endl;
    cout << "The tip is:               " << tipTotal << endl;
    cout << "The total cost is:       " << mealTotal << endl;
}
