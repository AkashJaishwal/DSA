#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int i = 1;

    while (i <= n){

        int space = 1;
        while(space < i)
        {
            cout << " " << " ";
            space = space + 1;
        }

        int j = 1;
        while (j <= n - i + 1)
        {
            cout << "*" << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

/*
Input and Output 

Enter a number : 4
* * * *
  * * *
    * *
      *
    
*/

/* 
// practice session
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        int space = 1;

        while(space < i)
        {
            cout << "  ";
            space += 1;
        }

        while(j<= n - i + 1)
        {
            cout << "* ";
            j = j + 1;
        }
        cout << endl;
        i += 1;
    }
}
 */