//
// Seamus Lally
// 4/6/2025
// Search Benchmarks Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

int linSearch(const int [], int, int );
int biSearch(const int [], int, int );

int main(){

    int pick_Num;
    int num_of_times;

    const int MAX_NUM = 20;
    int num[MAX_NUM] = {1, 2, 3, 4, 5, 6, 7, 8, 49, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    cout << "pick a number ";
    cin >> pick_Num;

    num_of_times = linSearch(num, MAX_NUM, pick_Num);

    cout << "Through linear search it took " << num_of_times << endl;

    num_of_times = biSearch(num, MAX_NUM, pick_Num);

    cout << "Through binary search it took " << num_of_times << endl;
}

int linSearch(const int arr[], int size, int value){
    int index = 0;
    int position = -1;
    int tries = 0;
    bool found = false;

    while(index < size && !found){
        if (arr[index] == value){
            found = true;
            position = index;
        }
        index++;
        tries++;
    }
    return tries;
}

int biSearch(const int array[], int numElems, int value) { 
    int first = 0,
        last = numElems - 1, 
        middle, 
        position = -1;
    int tries = 0;
    bool found = false;
 
    while (!found && first <= last){ 
        middle = (first + last) / 2;
        if (array[middle] == value){ 
            found = true; 
            position = middle; 
        }else if (array[middle] > value){
            last = middle - 1; 
        }else{
            first = middle + 1;
            
        } 
    tries++;
    }
    return tries;
} 