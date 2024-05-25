#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    int num ;
    cin >> num;

    /* switch (num)
    {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;

    default:
        cout << "Default" << endl;
    } */

    switch (ch)
    {
    case 1:
        cout << "One" << endl;
        break;
    case '1':
        switch (num)
        {
        case 1:
            cout << "Value is : " << num;
            break;
        }
        break;

    default: // It is not mandotary default case
        cout << "Default" << endl;
    }
}
