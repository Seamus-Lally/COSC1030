//
// Seamus Lally
// 4/20/2025
// Pig Latin Programming Project
// COSC 1030
//
#include <iostream>
#include <cstring>
using namespace std;

//prototype fcn
void pig(char* str);



int main(){
    //variables for input array
    const int size = 80;
    char input[size];

    //getting sentence
    cout << "enter a sentence under 80 characters: \n";
    cin.getline(input, size);

    pig(input);
    return 0;
}

void pig(char* str){
    int length = strlen(str);
    int temp_i = 0;

    for(int i = 0; i <= length;i++){
        
        while(i < length && (str[i] != ' ')){
            if(str[i+1] != ' ' || (i >= length)){
                cout << str[i+1];
                temp_i++;
                i++;
            }else{
                cout << str[i-temp_i] << "ay";
                i++;
                temp_i = 0;
            }
            if(i == length){
                cout << str[i-temp_i] << "ay";
                i++;
                temp_i = 0;
            }
            
            
        }
            
        if((i <= length)){
            cout << str[i];
        }
    }
    cout << endl;
    
}