#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Decimal Number : ";
    cin >> n;

    int num = 0;
    int digit = 0;
    int i = 0;
    while(n!=0)
    {
        digit = n%2;
        n = n/2;
        i++;
    }
    num = digit + (digit* pow(10,i));
    cout << num;
}