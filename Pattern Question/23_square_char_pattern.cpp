#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Num : ";
    cin>> n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<= n){
            char ch = 'A'+j-1;
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

/*
Input and Output
Enter a Num : 3
A B C
A B C
A B C
*/