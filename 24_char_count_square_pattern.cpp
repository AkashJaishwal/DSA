#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     cout<< "Enter a num : ";
//     cin >> n;

//     int i = 1;
//     char ch= 'A';

//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout <<ch << " ";
//             ch = ch + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }

int main()
{
    int n;
    cout << "Enter a Num : ";
    cin >> n;

    int i = 1;
    char ch = 'A';

    while (i <= n){
        int j = 1;
        while (j <= n){
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}