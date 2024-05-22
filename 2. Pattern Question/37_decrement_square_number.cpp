#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a num : ";
    cin >> n;

    int a = 1; 
    while ( a <= n-1)
    {
        int b = 1;
        int count2 = n;
        while (b <= a-1){
            cout << count2 << " ";
            count2--;
            b++;
        }

        int c = 1;
        int count3 = n;
        while (c <= (n-a)*2){
            cout << n - a + 1 << " ";
            c++;
        }

        int d = 1;
        int count4 = n;
        while (d <= a){
            cout << count4 - a + 1<< " ";
            count4++;
            d++;
        }
        cout << endl;
        a++;
    }

    int i = 1;
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
    }
}