//
// Seamus Lally
// 2/13/2025
// University of Guiness Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;


int main(){
    //defining variables
    string state, room;
    int inStateCost = 3000;
    int inRoomCost = 2500;
    int outStateCost = 4500;
    int outRoomCost = 3500;
    int totalCost = 0;

    //Asking residential status and Room and Board
    cout << "What is your current residential status? (in-state or out-of-state): ";
    cin >> state;

    cout << "Do you need Room and Board? (Y or N): ";
    cin >> room;

    //calculating cost
    if (state == string("in-state")){
        totalCost = totalCost + inStateCost;
        cout << "In-state tuition costs: $" << inStateCost << endl;
        if (room == string("Y")){
            totalCost = totalCost + inRoomCost;
            cout << "In-state Room and Board costs: $" << inRoomCost << endl;
        }
    }else{
        totalCost = totalCost + outStateCost;
        cout << "Out-of-state tuition cost: $" << outStateCost << endl;
        if (room == string("Y")){
            totalCost = totalCost + outRoomCost;
            cout << "Out-of-state Room and Board cost: $" << outRoomCost << endl;
        }
    }

    //displaying total cost
    cout << "Your total for this semester is $"<< totalCost <<endl;
    
}
