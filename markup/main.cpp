//
// Seamus Lally
// 3/16/2025
// Markup Programming Project
// COSC 1030
//

#include <iomanip>
#include <iostream>
using namespace std;

double calculateRetail(double, double);

int main(){
    double wholeCost, finCost, markup;


    cout << "Enter the wholesale cost of the item: $";
    cin >> wholeCost;
    cout << "Enter the percent markup of the item: (Not in decimal) ";
    cin >> markup;

    finCost = calculateRetail(wholeCost, markup); 
    cout << "The items retail cost is $" << fixed << setprecision(2) << finCost << endl;

}

double calculateRetail(double x, double y){
    double z;
    z = x * ((100 + y)/100);
    return z;
} 