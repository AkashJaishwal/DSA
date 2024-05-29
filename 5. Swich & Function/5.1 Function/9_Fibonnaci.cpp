#include <iostream>
using namespace std;

int Fibonnaci(int n)
{
    int a = 0, b = 1;
    int nextnum = 0;
    for (int i = 1; i <= n-2; i++)
    {
        nextnum = a + b;
        a = b;
        b = nextnum;
    }
    return nextnum;
}

int main()
{
    int n;
    cout << "Enter n for nth Fibonnaci Number : ";
    cin >> n;
    cout << "nth Fibonnaci is " << Fibonnaci(n);
}