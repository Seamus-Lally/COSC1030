//
// Seamus Lally
// 4/6/2025
// Temperatures
// COSC 1030
//
#include <iostream>
#include <iomanip>
using namespace std;

//Functions
int smallest(int, int);
int biggest(int, int);
double avg(int);

//global variable
const int MAX_DAYS = 50;
typedef int Temp[MAX_DAYS];
Temp day_Temp;

int main(){
    // local variable
    int least = 0;
    int most = 0;
    int day;

    //getting number of days
    cout << "How many days: ";
    cin >> day;

    //getting temp for days and calculating min and max
    for (int i = 0; i < day; i++){
        cout << "What temperature was the " << i + 1 << " day: ";
        cin >> day_Temp[i];
        least = smallest(i, least);
        most = biggest(i, most);
    }
    
    //displaing info
    cout << "The average tempature: " << fixed << setprecision(2) << avg(day) << endl;
    cout << "The highest temperature " << day_Temp[least] << endl;
    cout << "The lowest temperature " << day_Temp[most] << endl;


}

//min
int smallest(int x, int y){
    if(day_Temp[y] > day_Temp[x]){
        return x;
    }else{
        return y;
    }
}

//max
int biggest(int x, int y){
    if(day_Temp[y] < day_Temp[x]){
        return x;
    }else{
        return y;
    }
}

//avg
double avg(int x){
    double avg = 0;
    for (int i = 0; i < x; i++){
        avg += day_Temp[i];
    }
    avg = avg/x;
    return avg;
}
