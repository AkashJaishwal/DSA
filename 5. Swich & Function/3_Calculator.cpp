#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter Two Num : ";
    cin >> a >> b;

    char opt;
    cout << "Enter Operattor (+ , - , /, *) : ";
    cin >> opt;

    switch(opt){
        case '+' : cout << a + b; break;
        case '-' : cout << a - b; break;
        case '*' : cout << a * b; break;
        case '/' : cout << a / b;
        default : cout << "Enter Valid Operator";
    }
}