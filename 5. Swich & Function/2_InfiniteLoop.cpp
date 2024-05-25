#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Num : ";
    cin >> num;

    while (1){
        switch(num){
            case 1 : cout << "One"; break;
            case 2 : cout << "Two"; break;
            case 3 : cout << "Three"; break;
            case 4 : cout << "Four"; break;
            case 5 : cout << "Five"; break;
            case 6 : cout << "Six"; break;
            // continue; // It it not valid in switch case as it creat the continous loop and don't allow for the default cases
            case 7 : cout << "Seven"; break;
            case 8 : cout << "Eight"; break;
            case 9 : cout << "Nine"; break;
            default : cout << "Default";
        }
        exit(num);
    }
}