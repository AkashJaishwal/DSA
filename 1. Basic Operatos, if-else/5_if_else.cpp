#include <iostream>
using namespace std;

int main()
{
    int n, p;
    cout << "Enter a num1 : " << endl;
    cin >> n;
    // n = cin.get();     //It will read the space values as well and the ASCII values
    // cout<< n << endl;
    cout << "Enter a num2 : " << endl;
    cin >> p;

    // if (n > 0)
    // {
    //     cout << "It is +ve number";
    // }
    // else
    // {
    //     cout << "It is a -ve number";
    // }
    if (n>p){
        cout << "Num 1 is greater"; 
    }
    else if(n==p){
        cout << "Both are equal";
    }
    else{
        cout << "Num2 is grearter";
    }

}