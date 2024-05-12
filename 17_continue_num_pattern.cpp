#include <iostream>
using namespace std;

int main(){

    system ("cls");
    int n;
    cout<< "Enter a number : ";
    cin >> n;
    int i = 1;
    int count =1; // it will be used to print the count number only 
    while(i <= n)
    {
        int j = 1;
        while (j <=n)
        {
            cout << count << " ";
            count = count + 1; // it is used to increaes the number of count.
            j = j +1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}

/*
// Input Output

Enter a number : 3
1 2 3 
4 5 6 
7 8 9 
*/

// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1; 
//     int count = 1;
//     while(i<=n)
//     {
//         int j = 1;
//         while(j <= n)
//         {
//             cout << count  << " ";
//             count = count + 1;
//             j = j + 1;
//         }
//         cout << endl; 
//         i = i + 1;
//     }
//     return 0;
// }