#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the array : " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "Printed the array." << endl;
}

//above function can't be accest by ch array as there is different in the data types

int main()
{
    // char array
    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << "Second Element is : " << ch[2] << endl;

    for (int i=0; i<5; i++){
        cout << ch[i] << " ";
    }

    //in similar mannner we can declare array of any type 
    double firstDouble[10];
    float firstFloat[6];
    bool firstBool[4];

    cout << endl
        << "Everthing is fine" << endl
        << endl;

    return 0;

    // we learn about the function declaration and calling
}