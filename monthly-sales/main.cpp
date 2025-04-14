//
// Seamus Lally
// 4/13/2025
// Monthly Sales Programming Project
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;

// protype Fcns
double year_Total(double *month_Array, int size);
double total_Avg(double total, int size);

int main(){
    //variables
    int size = 0;
    double yearlyTotal = 0, monthlyAvg = 0;

    //pointer variables
    double* month_Array = 0;

    //getting the number of months
    cout << "How many months: ";
    cin >> size;

    //making the dynamic month array
    month_Array = new double[size];

    //getting monthly sales and putting them in the array
    for (int i = 0; i < size; i++){
        cout << "Month " << i + 1 << ": $";
        cin >> month_Array[i];
    }  

    //calculating total and avg
    yearlyTotal = year_Total(month_Array, size);
    monthlyAvg = total_Avg(yearlyTotal, size);

    //printing 
    cout << "The yearly sum is $" << fixed << setprecision(2) << yearlyTotal << endl;
    cout << "The monthly average is $" << fixed << setprecision(2) << monthlyAvg << endl;
    
}


double year_Total(double *month_Array, int size){
    double total = 0;
    for (int i = 0; i < size; i++){
        total += month_Array[i];
    }
    return total;
}

double total_Avg(double total, int size){
    return total/size;
}