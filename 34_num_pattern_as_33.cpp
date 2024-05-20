#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Num : ";
    cin >> n;

    int i = 1;
    while (i <= n){
        int j = 1; 
        int space = 1;

        while (space < i){
            cout << " " << " ";
            space = space + 1;
        }

        while (j <= n - i + 1){
            cout << i << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

/*
Input and Output

Enter a Num : 4
1 1 1 1
  2 2 2
    3 3
      4

*/


/*

For patter 
Enter a Num : 4
      1
    2 2
  3 3 3
4 4 4 4

int main()
{
    int n;
    cout << "Enter a Num : ";
    cin >> n;

    int i = 1;
    while (i <= n){
        int j = 1; 
        int space = n - i;

        while (space){
            cout << " " << " ";
            space = space - 1;
        }

        while (j <= i){
            cout << i << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

*/


/*

For patter
Enter a number : 4
1 2 3 4
  2 3 4
    3 4
      4

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int i = 1;
    while(i <= n){
        int j = 1;
        int space = 1;

        while(space < i){
            cout << " " << " ";
            space += 1;
        }

        while(j <= n - i + 1){
            cout << j + i - 1 << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}


*/
