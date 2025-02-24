//
// Seamus Lally
// 2/23/2025
// Beverages Survey Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

int main(){
    //declaring variables
    int input, coffee = 0, tea = 0, coke = 0, orange_Juice = 0;


    //code to gather the answers.
    cout << "Avaliable drinks: \n1. Coffee \n2. Tea \n3. Coke \n4. Orange Juice \n";
    while (input != -1){
        cout << "Type the number of the drink you like the most: (Type -1 when everyone has answered.) ";
        cin >> input;

        if (input == 1){
            cout << "One coffee has been added. \n";
            coffee += 1;
        } else if (input == 2) {
            cout << "One tea has been added. \n";
            tea += 1;
        } else if (input == 3){
            cout << "One coke has been added. \n";
            coke += 1;
        } else if (input == 4){
            cout << "One orange juice has been added. \n";
            orange_Juice += 1;
        } else if (input == -1){
            
        } else {
            cout << "That's not an options. \nThe options are:\n1. Coffee \n2. Tea \n3. Coke \n4. Orange Juice \n";
        }
        


    }
    //printing the talley of the answers
    cout << "Your table has ordered: \n" << coffee << " Coffees \n" << tea << " teas \n" << coke << " Cokes \n" << orange_Juice << " Orange Juices \n";
}
