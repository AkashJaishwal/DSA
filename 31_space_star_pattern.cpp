#include <iostream>
using namespace std;

int main()
{
    int n; 
    cout << "Enter a Number : ";
    cin >> n;

    int i = 1;
    while(i <= n){
        int space = n - i;
        while (space){
            cout << " " << " "; //Here the extra space is just to maintain some good space also can be removed but have to remove from below one also
            space = space - 1;
        }

        int j = 1;
        while (j <= i){
            cout << "*" << " "; //Here the extra space is just to maintain some good space also can be removed but have to remove from above one also
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

/* 
Input and Output

Enter a Number : 4
      *
    * *
  * * *
* * * *

*/