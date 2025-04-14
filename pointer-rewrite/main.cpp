//
// Name
// Date
// Pointer Rewrite Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

//prototype functions
int doSomething(int &x, int &y);

int main(){
    //variables
    int x, y;
    //pointer variables
    int* prt_x = 0;
    int* prt_y = 0;

    //getting var x
    cout << "Pick a number: ";
    cin >> x;
    //setting pointer x
    prt_x = &x;

    //getting var y
    cout << "Pick a number: ";
    cin >> y;
    //setting pointer y
    prt_y = &y;

    cout << doSomething(*prt_x, *prt_y) << endl;
}


int doSomething(int &x, int &y){
    int temp = x;
    x = y * 10;
    y = temp * 10;
    return x + y;
}