#include <iostream>
using namespace std;

int main()
{
    int a, b;
    
    cout <<"Bit Wise Operator\n"<<  "Enter two number : ";
    cin >> a >> b;
    
    //Dealing with bitwise operators 
    //they operates on bit level (Bit Operation)

    cout <<endl << (a&b) << endl; // AND --> &
    cout << (a|b) << endl; // OR --> |
    cout << (~a) << endl; // NOT --> ~
    cout << (a^b) << endl; // XOR --> ^
}