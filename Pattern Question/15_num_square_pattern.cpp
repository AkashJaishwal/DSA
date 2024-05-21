#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the No. for pattern : ";
    int n;
    cin >> n;

    int i = 1; // it is for the row
    while(i<=n)
    {
        int j = 1; // It is for column
        while(j<=n)
        {
            cout << j <<" ";
            j = j+1;
        }
        cout << "\n";
        i = i+1;
    }
    return 0;
}

//input output 
/*
Enter the No. for pattern : 4
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 
*/