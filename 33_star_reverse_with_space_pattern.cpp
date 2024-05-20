#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int space = i - 1;
        while (space)
        {
            cout << " " << " ";
            space = space + 2;
        }

        int j = 1;
        while (j <= i)
        {
            cout << "*" << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}