//
// Seamus Lally
// 3/30/2025
// Chips and Salsa Programming Project
// COSC 1030
//
#include <iostream>
using namespace std;

int smallest(int, int);
int biggest(int, int);

const int NUM_SALSA = 5;
int salsa_Sale[NUM_SALSA];


int main(){

    int total = 0;
    int least = 0;
    int most = 0;
    
    string salsa_Names[NUM_SALSA];

    salsa_Names[0] = "Mild";
    salsa_Names[1] = "Medium";
    salsa_Names[2] = "Sweet";
    salsa_Names[3] = "Hot";
    salsa_Names[4] = "Zesty";
    
    

    for (int i = 0; i < 5; i++){
        cout << "How many " << salsa_Names[i] << " salsas have been sold: ";
        cin >> salsa_Sale[i];
        least = smallest(i, least);
        most = biggest(i, most);
        total += salsa_Sale[i];
    }

    for (int i = 0; i < 5; i++){
        cout << salsa_Names[i] << ": " << salsa_Sale[i] << endl;
    }
    cout << "Total Sales: " << total << endl;
    cout << "The least sold salsa " << salsa_Names[least] << endl;
    cout << "The most sold salsa " << salsa_Names[most] << endl;


}

int smallest(int x, int y){
    
    if(salsa_Sale[y] > salsa_Sale[x]){
        return x;
    }else{
        return y;
    }
}

int biggest(int x, int y){
    
    if(salsa_Sale[y] < salsa_Sale[x]){
        return x;
    }else{
        return y;
    }
}