//
// Seamus Lally
// 2/18/2025
// Calories Burned Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

//declaring constents for loop
const int MAX_MINUTES = 30;

int main(){
    //declaring variables
    double cal = 3.6;
    int burn = 0;
    

    //runs loop 6 times to calulate calories burned
    for (int i = 5; i <= MAX_MINUTES; i += 5){
        //calulates and displays the number of calories burned
        burn = i * cal;
        cout << "After " << i << " minutes you will burn " << burn << " calories." << endl;
    }
    
}

