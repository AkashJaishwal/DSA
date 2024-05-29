#include <iostream>
using namespace std;

int main()
{
    int a[10] = {0};
    int b[10] = {5};
    int c[10];

    cout << "Elements of array a: ";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " "; // it will print the initial value as 0 and rest rest will remain zero
    }
    cout << "\n";

    cout << "Elements of array b: ";
    for (int i = 0; i < 10; i++)
    {
        cout << b[i] << " "; // Here It will print the initial element as 5 but the rest will be zero
    }
    cout << "\n";

    for (int i = 0; i < 10; i++)
    {
        c[i] = 5;
    }

    cout << "Elements of array c: ";
    for (int i = 0; i < 10; i++)
    {
        cout << c[i] << " "; // here it will print the values as  array[5] = 5 5 5 5 5 5 5 5 
                            // as above we have used the for loop and assigning the value to int of every address.
    }
    cout << "\n";

    return 0;
}