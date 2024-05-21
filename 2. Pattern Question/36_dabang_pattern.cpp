#include <iostream>
using namespace std;

void call(int n){
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j += 1; 
        }

        int k = 1;
        while(k <= i-1){
            cout << "* ";
            k += 1;
        }

        int l = 1;
        while(l <= i-1){
            cout << "* ";
            l += 1;
        }

        int m = 1;
        int count = n;
        while (m <= n - i + 1)
        {
            cout << count - i + 1 << " ";   
            count = count - 1;        
            m += 1;
        }
        cout << endl;
        i += 1;
    }
}

int main ()
{
    int n;
    cout << "Enter a num : ";
    cin >> n;
    cout << "The Patter is : " << endl;
    call(n);
}


// int main()
// {
//     int n;
//     cout << "Enter a num : ";
//     cin >> n;

//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n - i + 1)
//         {
//             cout << j << " ";
//             j += 1; 
//         }

//         int k = 1;
//         while(k <= i-1){
//             cout << "* ";
//             k += 1;
//         }

//         int l = 1;
//         while(l <= i-1){
//             cout << "* ";
//             l += 1;
//         }

//         int m = 1;
//         int count = n;
//         while (m <= n - i + 1)
//         {
//             cout << count - i + 1 << " ";   
//             count = count - 1;        
//             m += 1;
//         }
//         cout << endl;
//         i += 1;
//     }
// }