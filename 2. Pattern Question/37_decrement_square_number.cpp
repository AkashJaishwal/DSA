#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 1; 
    while ( a <= n)
    {
        // int b = 1;
        // int count2 = n;
        // while (b <= a){
        //     cout << count2-- << " ";
        //     b++;
        // }

        int c = 1;
        int count3 = n;
        while (c <= n){
            cout << count3-- << " ";
            c++;
        }


        cout << endl;
        a++;
    }

    /* int i = 1;
    while (i <= n){
        int j = 1;
        int count = n;
        while (j <= n - i + 1)
        {
            cout << count-- << " ";
            j += 1;
        }

        int k = 1;
        while (k <= (i-1)*2){
            cout << i << " ";
            k = k + 1;
        }
        int o = 1;
        while (o <= n - i){
            cout << o  + i << " ";
            o++;
        }
        cout << endl;
        i++;
    } */
}