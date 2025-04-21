//
// Seamus Lally
// 4/20/2025
// Backward String Programming Project
// COSC 1030
//
#include <iostream>
#include <cstring>
using namespace std;

void backward(char* str);

int main(){

    const int size = 50;
    char input[size];

    cout << "enter a word under 50 characters: \n";
    cin.getline(input, size);

    backward(input);
    return 0;
}

void backward(char* str){
    int length = strlen(str);

    for(int i = length; i >= 0; i--){
        cout << str[i];
    }
    cout << endl;
    
}