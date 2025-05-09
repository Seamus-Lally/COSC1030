//
// Seamus Lally
// 3/2/2025
// Hotel Occupancy Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;
#include <iomanip>

int main(){
    //declaring variables
    int floor, room, occupied;
    double total_Occupied = 0;
    double total_Room = 0;

    //getting the number of floors
    while(true){
        cout << "Enter the number of floors: ";
        cin >> floor;
        if (floor > 1){
            break;
        }
        cout << "The number of floors needs to be bigger than 1. \n";    
    }
    //loop for each floor (not including 13)
    for (int i = 1; i <= floor; i++){
        if (i != 13){
            cout << "Floor: " << i <<endl;
            //getting number of rooms on a floor
            while(true){
                cout << "Enter the number of rooms: (can't be less than 10) ";
                cin >> room;
                if (room >= 10){
                    total_Room += room;
                    break;
                }
                cout << "The number of rooms needs to be more than 10.\n";
            }
            //getting a number of occupied rooms
            while(true){
                cout << "How many of the " << room << " rooms are occupied? ";
                cin >> occupied;
                if (occupied <= room){
                    total_Occupied += occupied;
                    break;
                }
                cout << "The number of occupied rooms can't be more than the rooms on the floor. \n";    
            }
        }
    }
    //showing how many rooms the hotel has, how many of them are occupied, how many are unoccupied, and the percentage of rooms that are occupied
    cout << "The number of rooms is: " << total_Room << endl;
    cout << "The number of occupied rooms is: " << total_Occupied << endl;
    cout << "The number of unoccupied rooms is: " << total_Room - total_Occupied << endl;
    cout << "The percent of rooms occupied is: " << setprecision(4) << (total_Occupied/total_Room) * 100 << "%\n";
}