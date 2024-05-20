#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a Num : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " " << " ";
            space = space - 1;
        }

        int j = 1;
        while (j <= i){
            cout << j << " ";
            j = j + 1;
        }

        int k = 1;
        while (k <= i - 1){
            cout << i - k << " ";
            k = k + 1;
        }


        /*
        // Another approach 
        int k = i - 1;
        while (k){
            cout << k << " ";
            k = k - 1;
        } */
        

        cout << endl;
        i = i + 1;
    }   
}