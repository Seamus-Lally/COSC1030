//
// Seamus Lally
// 3/16/2025
// Grades Programming Project
// COSC 1030
//

#include <iomanip>
#include <iostream>
using namespace std;

//declaring functions
string calc_grade(int,int);


int main(){
    //declaring variables
    int addGrade, gradePercent = 0, testNum = 0;
    string grade;

    //getting the grades and the number of them
    do{
        cout << "Enter a grade: (Type -1 to stop) ";
        cin >> addGrade;
        if(addGrade != -1){
            gradePercent += addGrade;
            testNum++;
        }
    } while (addGrade != -1 || addGrade != -1);

    //getting the grade letter
    grade = calc_grade(gradePercent, testNum);
    cout << "The average grade of the class is " << grade << endl;

}

//calculating the grade letter
string calc_grade(int x, int y){
    //calculating the grade average
    int z = (x/y);
    string gradeLetter;

    //sorting the grade average into the grade letter
    if(z >= 90){
        gradeLetter = 'A';
    }else if(z >= 80 && z <= 89){
        gradeLetter = 'B';
    }else if(z >= 70 && z <= 79){
        gradeLetter = 'C';
    }else if(z >= 60 && z <= 69){
        gradeLetter = 'D';
    }else if(z <= 59){
        gradeLetter = 'F';
    }else

    return gradeLetter;
}