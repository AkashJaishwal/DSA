// Typecasting basically means the assignment of the data to its data type
#include <iostream>
using namespace std;

int main()
{
    int a = 'a';
    cout << a << endl;

    char ch = 98;
    cout << ch << endl;

    char ch1 = 65;  // here the number is ASCAII value so it is getting converted to the int value
    cout << ch1 << endl;

    int num = 'C';
    cout << "ASCAII " << num << endl ;

    /*
        warning: overflow in implicit constant conversion [-Woverflow]
         char ch1 = 123456;

         just because the ch=8 bit only
         where as the 123456 will occupy more than 8 bit so that
        the data in last 8 bit value will be displayed i.e. @
    */

    // dealing with negative numbers

    signed int s = -123;
    cout << s << endl;

    unsigned int u = 122;
    cout << u << endl;

    unsigned int u1 = -122; // without using signed it will give random number 
    cout << u1 << endl;
}