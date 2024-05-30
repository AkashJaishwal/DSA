#include <iostream> 
using namespace std;

// HOLD 
void printArray()
{
    //hold it for now 
}

int main()
{
    //declare
    int number[15];

    // accessing an array
    cout << "Value at 1st Index is : " << number[1] << endl;

    cout << "Value at 15th Index is : " << number[14] << endl;
    //They are storing garbage value and returning the garbage value

    // cout << "Value of 20th Index is : " << number[20] << endl; // It will not be able to access the value as the array size not defined . Only 15 size array is defined

    //Initialising an array
    int second[3] = {5, 7, 11};
    //Accessing an element in the array
    cout << "Value at 2nd Index is " << second[2] << endl; 

    int third[15] = {5,7};

    //print the array 
    int n = 15;
    cout << "Printing the array " << endl;
    for (int i=0; i<n; i++){
        cout << third[i] << " ";
    }

    int fourth[10] = {0};
    n = 10;
    cout << "Printing the array " << endl;
    for (int i=0; i<n; i++){
        cout << fourth[i] << " ";
    }

    int fifth[10] = {1};
    n = 10;

    for(int i=0; i < n; i++){
        fifth[i] = 1;
    }

    // Without the above for loop below statement can't print the all 1 
    cout << "Printing the array " << endl;
    for (int i=0; i<n; i++){
        cout << fifth[i] << " ";
    }


    cout << endl << "Everthing is fine" << endl << endl;

    return 0;
}